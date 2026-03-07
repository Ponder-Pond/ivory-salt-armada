#include "grs_01.h"
#include "dx/debug_menu.h"

namespace grs_01 {

EntryList Entrances = { GEN_ENTRY_LIST };

#include "world/common/atomic/TexturePan.inc.cpp"

EvtScript EVS_TexPan = {
    SetGroup(EVT_GROUP_NEVER_PAUSE)
    Call(SetTexPanner, MODEL_Waves, TEX_PANNER_1)
    Thread
        GEN_TEX_PANNER_1
        Exec(EVS_UpdateTexturePan)
    EndThread
    Call(SetTexPanner, MODEL_WaterSurface, TEX_PANNER_1)
    Thread
        GEN_TEX_PANNER_1
        Exec(EVS_UpdateTexturePan)
    EndThread
    Return
    End
};

#include "world/common/enemy/Goomba_Wander.inc.cpp"

EvtScript EVS_NpcDefeat_Goomba1 = {
    Call(GetBattleOutcome, LVar0)
    Switch(LVar0)
        CaseEq(OUTCOME_PLAYER_WON)
            Add(MV_EnemiesDefeated, 1)
            Call(DoNpcDefeat)
        CaseEq(OUTCOME_PLAYER_LOST)
        CaseEq(OUTCOME_PLAYER_FLED)
    EndSwitch
    Return
    End
};

EvtScript EVS_NpcInit_Goomba1 = {
    Call(BindNpcDefeat, NPC_SELF, Ref(EVS_NpcDefeat_Goomba1))
    Return
    End
};

NpcData NpcData_Goomba1 = {
    .id = NPC_Goomba1,
    .settings = &NpcSettings_Goomba_Wander,
    .pos = { GEN_GOOMBA1_VEC },
    .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING,
    .init = &EVS_NpcInit_Goomba1,
    .yaw = GEN_GOOMBA1_DIR,
    .drops = GOOMBA_DROPS,
    .territory = GEN_GOOMBA1_TERRITORY,
    .animations = GOOMBA_ANIMS,
    .aiDetectFlags = AI_DETECT_SIGHT,
};

EvtScript EVS_NpcDefeat_Goomba2 = {
    Call(GetBattleOutcome, LVar0)
    Switch(LVar0)
        CaseEq(OUTCOME_PLAYER_WON)
            Add(MV_EnemiesDefeated, 1)
            Call(DoNpcDefeat)
        CaseEq(OUTCOME_PLAYER_LOST)
        CaseEq(OUTCOME_PLAYER_FLED)
    EndSwitch
    Return
    End
};

EvtScript EVS_NpcInit_Goomba2 = {
    Call(BindNpcDefeat, NPC_SELF, Ref(EVS_NpcDefeat_Goomba2))
    Return
    End
};

NpcData NpcData_Goomba2 = {
    .id = NPC_Goomba2,
    .settings = &NpcSettings_Goomba_Wander,
    .pos = { GEN_GOOMBA2_VEC },
    .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING,
    .init = &EVS_NpcInit_Goomba2,
    .yaw = GEN_GOOMBA2_DIR,
    .drops = GOOMBA_DROPS,
    .territory = GEN_GOOMBA2_TERRITORY,
    .animations = GOOMBA_ANIMS,
    .aiDetectFlags = AI_DETECT_SIGHT,
};

#include "world/common/enemy/SpikedGoomba_Wander.inc.cpp"

EvtScript EVS_NpcDefeat_SpikedGoomba = {
    Call(GetBattleOutcome, LVar0)
    Switch(LVar0)
        CaseEq(OUTCOME_PLAYER_WON)
            Add(MV_EnemiesDefeated, 1)
            Call(DoNpcDefeat)
        CaseEq(OUTCOME_PLAYER_LOST)
        CaseEq(OUTCOME_PLAYER_FLED)
    EndSwitch
    Return
    End
};

EvtScript EVS_NpcInit_SpikedGoomba = {
    Call(BindNpcDefeat, NPC_SELF, Ref(EVS_NpcDefeat_SpikedGoomba))
    Return
    End
};

NpcData NpcData_SpikedGoomba = {
    .id = NPC_SpikedGoomba,
    .settings = &NpcSettings_SpikedGoomba_Wander,
    .pos = { GEN_SPIKED_GOOMBA_VEC },
    .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING,
    .init = &EVS_NpcInit_SpikedGoomba,
    .yaw = GEN_SPIKED_GOOMBA_DIR,
    .drops = SPIKED_GOOMBA_DROPS,
    .territory = GEN_SPIKED_GOOMBA_TERRITORY,
    .animations = SPIKED_GOOMBA_ANIMS,
    .aiDetectFlags = AI_DETECT_SIGHT,
};

#include "world/common/enemy/KoopaTroopa_Wander.inc.cpp"

EvtScript EVS_NpcDefeat_KoopaTroopa1 = {
    Call(GetBattleOutcome, LVar0)
    Switch(LVar0)
        CaseEq(OUTCOME_PLAYER_WON)
            Add(MV_EnemiesDefeated, 1)
            Call(DoNpcDefeat)
        CaseEq(OUTCOME_PLAYER_LOST)
        CaseEq(OUTCOME_PLAYER_FLED)
    EndSwitch
    Return
    End
};

EvtScript EVS_NpcInit_KoopaTroopa1 = {
    Call(BindNpcDefeat, NPC_SELF, Ref(EVS_NpcDefeat_KoopaTroopa1))
    Return
    End
};

NpcData NpcData_KoopaTroopa1 = {
    .id = NPC_KoopaTroopa1,
    .settings = &NpcSettings_KoopaTroopa_Wander,
    .pos = { GEN_KOOPA_TROOPA1_VEC },
    .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING,
    .init = &EVS_NpcInit_KoopaTroopa1,
    .yaw = GEN_KOOPA_TROOPA1_DIR,
    .drops = KOOPA_TROOPA_NOK_DROPS,
    .territory = GEN_KOOPA_TROOPA1_TERRITORY,
    .animations = KOOPA_TROOPA_ANIMS,
    .aiDetectFlags = AI_DETECT_SIGHT,
};

EvtScript EVS_NpcDefeat_KoopaTroopa2 = {
    Call(GetBattleOutcome, LVar0)
    Switch(LVar0)
        CaseEq(OUTCOME_PLAYER_WON)
            Add(MV_EnemiesDefeated, 1)
            Call(DoNpcDefeat)
        CaseEq(OUTCOME_PLAYER_LOST)
        CaseEq(OUTCOME_PLAYER_FLED)
    EndSwitch
    Return
    End
};

EvtScript EVS_NpcInit_KoopaTroopa2 = {
    Call(BindNpcDefeat, NPC_SELF, Ref(EVS_NpcDefeat_KoopaTroopa2))
    Return
    End
};

NpcData NpcData_KoopaTroopa2 = {
    .id = NPC_KoopaTroopa2,
    .settings = &NpcSettings_KoopaTroopa_Wander,
    .pos = { GEN_KOOPA_TROOPA2_VEC },
    .flags = ENEMY_FLAG_IGNORE_ENTITY_COLLISION | ENEMY_FLAG_FLYING,
    .init = &EVS_NpcInit_KoopaTroopa2,
    .yaw = GEN_KOOPA_TROOPA2_DIR,
    .drops = KOOPA_TROOPA_NOK_DROPS,
    .territory = GEN_KOOPA_TROOPA2_TERRITORY,
    .animations = KOOPA_TROOPA_ANIMS,
    .aiDetectFlags = AI_DETECT_SIGHT,
};

#include "world/common/enemy/KentCKoopa.inc.cpp"

EvtScript EVS_NpcDefeat_Kroxin = {
    Call(GetBattleOutcome, LVar0)
    Switch(LVar0)
        CaseEq(OUTCOME_PLAYER_WON)
            Add(MV_EnemiesDefeated, 1)
            Call(DoNpcDefeat)
        CaseEq(OUTCOME_PLAYER_LOST)
        CaseEq(OUTCOME_PLAYER_FLED)
    EndSwitch
    Return
    End
};

EvtScript EVS_NpcInit_Kroxin = {
    Call(EnableNpcShadow, NPC_SELF, false)
    Call(BindNpcDefeat, NPC_SELF, Ref(EVS_NpcDefeat_Kroxin))
    Return
    End
};

NpcData NpcData_Kroxin = {
    .id = NPC_Kroxin,
    .settings = &NpcSettings_KentCKoopa,
    .pos = { GEN_KROXIN_VEC },
    .flags = COMMON_PASSIVE_FLAGS | ENEMY_FLAG_NO_SHADOW_RAYCAST | ENEMY_FLAG_IGNORE_PLAYER_COLLISION | ENEMY_FLAG_NO_DROPS,
    .init = &EVS_NpcInit_Kroxin,
    .yaw = GEN_KROXIN_DIR,
    .drops = NO_DROPS,
    .territory = GEN_KROXIN_TERRITORY,
    .animations = KROXIN_ANIMS,
};


NpcGroupList DefaultNPCs = {
    NPC_GROUP((NpcData_Goomba1), BTL_KMR_1_GOOMBA1, BTL_KMR_1_PLEASANT_PATH_STAGE),
    NPC_GROUP((NpcData_Goomba2), BTL_KMR_1_GOOMBA2, BTL_KMR_1_PLEASANT_PATH_STAGE),
    NPC_GROUP((NpcData_SpikedGoomba), BTL_KMR_1_SPIKEDGOOMBA, BTL_KMR_1_PLEASANT_PATH_STAGE),
    NPC_GROUP((NpcData_KoopaTroopa1), BTL_KMR_1_KOOPATROOPA1, BTL_KMR_1_PLEASANT_PATH_STAGE),
    NPC_GROUP((NpcData_KoopaTroopa2), BTL_KMR_1_KOOPATROOPA2, BTL_KMR_1_PLEASANT_PATH_STAGE),
    NPC_GROUP((NpcData_Kroxin), BTL_KMR_1_KROXIN, BTL_KMR_1_PLEASANT_PATH_STAGE),
    {},
};

s32 KeyList[] = {
    ITEM_KOOPA_FORTRESS_KEY,
    ITEM_NONE
};

EvtScript EVS_Main = {
    Call(SetSpriteShading, SHADING_NONE)
    EVT_SETUP_CAMERA_NO_LEAD(0, 0, 0)
    Call(SetMusic, 0, SONG_PLEASANT_PATH, 0, VOL_LEVEL_FULL)
    Call(ClearAmbientSounds, 250)
    Call(PlayAmbientSounds, AMBIENT_BEACH)
    Exec(EVS_TexPan)
    // Call(DisablePlayerInput, true)
    // Call(DisablePlayerPhysics, true)
    Exec(EVS_SetFoliage)
    Call(MakeNpcs, true, Ref(DefaultNPCs))
    BindPadlock(Ref(EVS_UnlockSpring), TRIGGER_WALL_PRESS_A, EVT_ENTITY_INDEX(0), Ref(KeyList), 0, 1)
    ExecWait(EVS_MakeEntities)
    IfEq(GF_GRS01_EnemyChestSpawned, false)
        Exec(EVS_SpawnEnemyChest)
    EndIf
    Return
    End
};

}; // namespace grs_01

extern "C" export MapSettings grs_01_settings = {
    .main = &grs_01::EVS_Main,
    .entryList = &grs_01::Entrances,
    .entryCount = ENTRY_COUNT(grs_01::Entrances),
    .background = &gBackgroundImage,
};

extern "C" export s32 grs_01_map_init(void) {
    sprintf(wMapBgName, "shp_bg");
    return false;
}
