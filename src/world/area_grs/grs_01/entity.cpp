#include "grs_01.h"
#include "entity.h"
#include "effects.h"

namespace grs_01 {

EvtScript EVS_FocusCam_OnChest = {
    Call(UseSettingsFrom, CAM_DEFAULT, LVar0, LVar1, LVar2)
    Call(SetCamSpeed, CAM_DEFAULT, LVarA)
    Call(SetCamDistance, CAM_DEFAULT, Float(350.0))
    Call(SetCamPitch, CAM_DEFAULT, Float(12.0), Float(-5.5))
    Call(SetCamPosB, CAM_DEFAULT, Float(500.0), Float(20.0))
    Call(SetPanTarget, CAM_DEFAULT, GEN_GIANT_CHEST_VEC)
    Call(PanToTarget, CAM_DEFAULT, 0, true)
    Call(WaitForCam, CAM_DEFAULT, Float(1.0))
    Return
    End
};

#include "world/common/entity/Chest.inc.c"

API_CALLABLE(DismissGotItem) {
    Entity* bigChest = get_entity_by_index(4);
    bigChest->dataBuf.chest->gotItemDone = true;
    return ApiStatus_DONE2;
}

EvtScript EVS_PlayUpgradeSong = {
    Call(PushSong, SONG_ITEM_UPGRADE, 1)
    Wait(130)
    Call(PopSong)
    Return
    End
};

// EvtScript EVS_OpenChest = EVT_OPEN_CHEST(ITEM_PYRAMID_STONE, GF_TRP00_Chest_PyramidStone);

EvtScript EVS_SetupGiantChest_SuperHammer = {
    IfEq(GF_GRS01_GiantChest, false)
        Loop(0)
            IfEq(GF_GRS01_GiantChest, true)
                BreakLoop
            EndIf
            Wait(1)
        EndLoop
        // Call(PartnerIsFlying, LVar0)
        // IfEq(LVar0, false)
        //     Thread
        //         Call(DisablePartnerAI, 0)
        //         Call(NpcFlyTo, NPC_PARTNER, -222, -347, -531, 20, 0, EASING_LINEAR)
        //         Call(InterpNpcYaw, NPC_PARTNER, 70, 0)
        //         Loop(0)
        //             IfEq(GB_StoryProgress, STORY_CH2_GOT_SUPER_HAMMER)
        //                 BreakLoop
        //             EndIf
        //             Wait(1)
        //         EndLoop
        //         Call(EnablePartnerAI)
        //     EndThread
        // EndIf
        Wait(60)
        Exec(EVS_PlayUpgradeSong)
        Call(ShowMessageAtScreenPos, MSG_Menus_017D, 160, 40)
        Call(DismissGotItem)
        // Set(GB_StoryProgress, STORY_CH2_GOT_SUPER_HAMMER)
    EndIf
    Return
    End
};

API_CALLABLE(PlayBigSmokePuff) {
    Bytecode* args = script->ptrReadPos;
    s32 x = evt_get_variable(script, *args++);
    s32 y = evt_get_variable(script, *args++);
    s32 z = evt_get_variable(script, *args++);

    fx_big_smoke_puff(x, y, z);

    return ApiStatus_DONE2;
}

EvtScript EVS_SpawnEnemyChest = {
    IfEq(GF_GRS01_EnemyChestSpawned, true)
        Return
    EndIf
    Loop(0)
        IfEq(MV_EnemiesDefeated, 6)
            BreakLoop
        EndIf
        Wait(1)
    EndLoop
    Call(DisablePlayerInput, true)
    Set(GF_GRS01_EnemyChestSpawned, true)
    Call(PlayBigSmokePuff, GEN_GIANT_CHEST_VEC)
    Call(MakeEntity, Ref(Entity_GiantChest), GEN_GIANT_CHEST_PARAMS, ITEM_SUPER_HAMMER, MAKE_ENTITY_END)
    Call(AssignChestFlag, GF_GRS01_GiantChest)
    Call(AssignScript, Ref(EVS_SetupGiantChest_SuperHammer))
    // SetF(LVarA, Float(3.0))
    // ExecWait(EVS_FocusCam_OnChest)
    Wait(45)
    Call(DisablePlayerInput, false)
    Return
    End
};

#include "world/common/todo/RemovePadlock.inc.c"
#include "world/common/todo/GetEntityPosition.inc.c"

EvtScript EVS_UnlockSpring = {
    SetGroup(EVT_GROUP_NEVER_PAUSE)
    SuspendGroup(EVT_GROUP_FLAG_INTERACT)
    Call(ShowKeyChoicePopup)
    IfEq(LVar0, 0)
        Call(ShowMessageAtScreenPos, MSG_Menus_00D8, 160, 40)
        Call(CloseChoicePopup)
        ResumeGroup(EVT_GROUP_FLAG_INTERACT)
        Return
    EndIf
    IfEq(LVar0, -1)
        Call(CloseChoicePopup)
        ResumeGroup(EVT_GROUP_FLAG_INTERACT)
        Return
    EndIf
    Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_BITS, COLLIDER_SpringLockTop, COLLIDER_FLAGS_UPPER_MASK)
    Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_BITS, COLLIDER_SpringLockWall, COLLIDER_FLAGS_UPPER_MASK)
    Call(RemoveItem, ITEM_RUINS_KEY)
    Call(CloseChoicePopup)
    Set(GF_GRS01_UnlockedSpring, true)
    Call(N(GetEntityPosition), MV_PadlockEntityID, LVar0, LVar1, LVar2)
    Call(PlaySoundAt, SOUND_USE_KEY, SOUND_SPACE_DEFAULT, LVar0, LVar1, LVar2)
    Set(LVar0, MV_PadlockEntityID)
    Call(N(RemovePadlock))
    ResumeGroup(EVT_GROUP_FLAG_INTERACT)
    Unbind
    Return
    End
};

EvtScript EVS_OpenLockedSpring = {
    BindTrigger(Ref(EVS_UnlockSpring), TRIGGER_WALL_PRESS_A, COLLIDER_SpringLockWall, 1, 0)
    Return
    End
};

EvtScript EVS_MakeEntities = {
    IfEq(GF_GRS01_UnlockedSpring, false)
        Call(MakeEntity, Ref(Entity_Padlock), GEN_PADLOCK_PARAMS, MAKE_ENTITY_END)
        Call(AssignScript, Ref(EVS_OpenLockedSpring))
        Set(MV_PadlockEntityID, LVar0)
    Else
        Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_BITS, COLLIDER_SpringLockTop, COLLIDER_FLAGS_UPPER_MASK)
        Call(ModifyColliderFlags, MODIFY_COLLIDER_FLAGS_SET_BITS, COLLIDER_SpringLockWall, COLLIDER_FLAGS_UPPER_MASK)
    EndIf
    Call(MakeEntity, Ref(Entity_YellowBlock), GEN_YELLOW_BLOCK_PARAMS, MAKE_ENTITY_END)
    Call(AssignBlockFlag, GEN_YELLOW_BLOCK_FLAG)
    Call(MakeEntity, Ref(Entity_SimpleSpring), GEN_SPRING1_PARAMS, MAKE_ENTITY_END)
    Call(MakeEntity, Ref(Entity_SimpleSpring), GEN_SPRING2_PARAMS, MAKE_ENTITY_END)
    Return
    End
};

}; // namespace grs_01
