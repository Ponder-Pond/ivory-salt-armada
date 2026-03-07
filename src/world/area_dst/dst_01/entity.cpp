#include "dst_01.h"
#include "entity.h"
#include "effects.h"

namespace dst_01 {

EvtScript EVS_FocusCam_OnChest = {
    Call(UseSettingsFrom, CAM_DEFAULT, LVar0, LVar1, LVar2)
    Call(SetCamSpeed, CAM_DEFAULT, LVarA)
    Call(SetCamDistance, CAM_DEFAULT, Float(350.0))
    Call(SetCamPitch, CAM_DEFAULT, Float(12.0), Float(-5.5))
    Call(SetCamPosB, CAM_DEFAULT, Float(500.0), Float(20.0))
    Call(SetPanTarget, CAM_DEFAULT, GEN_ENEMY_CHEST_VEC)
    Call(PanToTarget, CAM_DEFAULT, 0, true)
    Call(WaitForCam, CAM_DEFAULT, Float(1.0))
    Return
    End
};

#include "world/common/entity/Chest.inc.c"

EvtScript EVS_OpenEnemyChest = EVT_OPEN_CHEST(ITEM_POWER_PLUS_A, GF_DST01_EnemyChest_PowerPlusA);

API_CALLABLE(PlayBigSmokePuff) {
    Bytecode* args = script->ptrReadPos;
    s32 x = evt_get_variable(script, *args++);
    s32 y = evt_get_variable(script, *args++);
    s32 z = evt_get_variable(script, *args++);

    fx_big_smoke_puff(x, y, z);

    return ApiStatus_DONE2;
}

EvtScript EVS_SpawnEnemyChest = {
    IfEq(GF_DST01_EnemyChestSpawned, true)
        Return
    EndIf
    Loop(0)
        IfEq(MV_EnemiesDefeated, 5)
            BreakLoop
        EndIf
        Wait(1)
    EndLoop
    Call(DisablePlayerInput, true)
    Call(PlaySound, SOUND_CHIME_SOLVED_PUZZLE)
    Wait(30)
    Call(PlayBigSmokePuff, GEN_ENEMY_CHEST_VEC)
    Call(PlaySoundAt, SOUND_SMOKE_BURST, SOUND_SPACE_DEFAULT, GEN_ENEMY_CHEST_VEC)
    Call(MakeEntity, Ref(Entity_Chest), GEN_ENEMY_CHEST_PARAMS, MAKE_ENTITY_END)
    Call(AssignChestFlag, GF_DST01_EnemyChest_PowerPlusA)
    Call(AssignScript, Ref(EVS_OpenEnemyChest))
    SetF(LVarA, Float(3.0))
    ExecWait(EVS_FocusCam_OnChest)
    Wait(45)
    Call(DisablePlayerInput, false)
    Return
    End
};

EvtScript EVS_OpenChest = EVT_OPEN_CHEST(ITEM_DEFEND_PLUS_A, GF_DST01_Chest_DefendPlusA);


EvtScript EVS_MakeEntities = {
    Call(MakeEntity, Ref(Entity_YellowBlock), GEN_YELLOW_BLOCK_PARAMS, MAKE_ENTITY_END)
    Call(AssignBlockFlag, GEN_YELLOW_BLOCK_FLAG)
    Call(MakeEntity, Ref(Entity_MulticoinBlock), GEN_YELLOW_BLOCK_PARAMS, MAKE_ENTITY_END)
    Call(AssignBlockFlag, GEN_MULTICOIN_BLOCK_FLAG)
    Call(MakeEntity, Ref(Entity_Chest), GEN_CHEST_PARAMS, MAKE_ENTITY_END)
    Call(AssignChestFlag, GF_DST01_Chest_DefendPlusA)
    Call(AssignScript, Ref(EVS_OpenChest))
    Call(MakeItemEntity, GEN_DRIED_FRUIT_PARAMS)
    Return
    End
};

}; // namespace dst_01
