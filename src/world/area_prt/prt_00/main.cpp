#include "prt_00.h"
#include "dx/debug_menu.h"

namespace prt_00 {

EntryList Entrances = { GEN_ENTRY_LIST };

#include "world/common/atomic/TexturePan.inc.cpp"

EvtScript EVS_TexPan = {
    SetGroup(EVT_GROUP_NEVER_PAUSE)
    Call(SetTexPanner, MODEL_kaimen, TEX_PANNER_1)
    Thread
        GEN_TEX_PANNER_1
        Exec(EVS_UpdateTexturePan)
    EndThread
    Return
    End
};

#include "world/common/npc/Toad_Stationary.inc.c"

EvtScript EVS_NpcInit_HarryT = {

    Return
    End
};

NpcData NpcData_HarryT = {
    .id = NPC_HarryT,
    .settings = &N(NpcSettings_Toad_Stationary),
    .pos = { GEN_HARRY_T_VEC },
    .flags = COMMON_PASSIVE_FLAGS,
    .init = &EVS_NpcInit_HarryT,
    .yaw = GEN_HARRY_T_DIR,
    .drops = NO_DROPS,
    .animations = {
        .idle   = ANIM_HarryT_Idle,
        .walk   = ANIM_HarryT_Walk,
        .run    = ANIM_HarryT_Run,
        .chase  = ANIM_HarryT_Run,
        .anim_4 = ANIM_HarryT_Idle,
    },
};

#include "world/common/npc/Bobomb.inc.cpp"

EvtScript EVS_NpcInteract_Grob = {
    // Call(SpeakToPlayer, NPC_Karter, ANIM_Karter_Talk, ANIM_Karter_Idle, 0, MSG_MGM_0004)
    Return
    End
};

EvtScript EVS_NpcInit_Grob = {
    Call(BindNpcInteract, NPC_SELF, Ref(EVS_NpcInteract_Grob))
    Return
    End
};

NpcData NpcData_Grob = {
    .id = NPC_Grob,
    .settings = &NpcSettings_Bobomb,
    .pos = { GEN_GROB_VEC },
    .flags = COMMON_PASSIVE_FLAGS,
    .init = &EVS_NpcInit_Grob,
    .yaw = GEN_GROB_DIR,
    .drops = NO_DROPS,
    .animations = BOBOMB_GREEN_ANIMS,
};

EvtScript EVS_NpcInteract_Karter = {
    // Call(SpeakToPlayer, NPC_Karter, ANIM_Karter_Talk, ANIM_Karter_Idle, 0, MSG_MGM_0004)
    Return
    End
};

EvtScript EVS_NpcInit_Karter = {
    Call(BindNpcInteract, NPC_SELF, Ref(EVS_NpcInteract_Karter))
    Return
    End
};

NpcSettings NpcSettings_Karter = {
    .height = 42,
    .radius = 24,
    .level = ACTOR_LEVEL_NONE,
};

NpcData NpcData_Karter = {
    .id = NPC_Karter,
    .settings = &NpcSettings_Karter,
    .pos = { GEN_KARTER_VEC },
    .flags = BASE_PASSIVE_FLAGS,
    .init = &EVS_NpcInit_Karter,
    .yaw = GEN_KARTER_DIR,
    .drops = NO_DROPS,
    .animations = {
        .idle   = ANIM_Archeologist_Idle,
        .walk   = ANIM_Archeologist_Walk,
        .run    = ANIM_Archeologist_Run,
        .chase  = ANIM_Archeologist_Run,
        .anim_4 = ANIM_Archeologist_Idle,
        .anim_5 = ANIM_Archeologist_Idle,
        .death  = ANIM_Archeologist_Idle,
        .hit    = ANIM_Archeologist_Idle,
        .anim_8 = ANIM_Archeologist_Idle,
        .anim_9 = ANIM_Archeologist_Idle,
        .anim_A = ANIM_Archeologist_Idle,
        .anim_B = ANIM_Archeologist_Idle,
        .anim_C = ANIM_Archeologist_Idle,
        .anim_D = ANIM_Archeologist_Idle,
        .anim_E = ANIM_Archeologist_Idle,
        .anim_F = ANIM_Archeologist_Idle,
    },
};

EvtScript EVS_NpcInteract_BarrT = {
    // Call(SpeakToPlayer, NPC_Karter, ANIM_Karter_Talk, ANIM_Karter_Idle, 0, MSG_MGM_0004)
    Return
    End
};

EvtScript EVS_NpcInit_BarrT = {
    Call(BindNpcInteract, NPC_SELF, Ref(EVS_NpcInteract_BarrT))
    Return
    End
};

NpcData NpcData_BarrT = {
        .id = NPC_BarrT,
        .settings = &N(NpcSettings_Toad_Stationary),
        .pos = { GEN_BARR_T_VEC },
        .flags = COMMON_PASSIVE_FLAGS,
        .init = &EVS_NpcInit_BarrT,
        .yaw = GEN_BARR_T_DIR,
        .drops  = NO_DROPS,
        .animations = TOAD_GUARD_RED_ANIMS,
};

EvtScript EVS_NpcInteract_Fishmael = {
    // Call(SpeakToPlayer, NPC_Karter, ANIM_Karter_Talk, ANIM_Karter_Idle, 0, MSG_MGM_0004)
    Return
    End
};

EvtScript EVS_NpcInit_Fishmael = {
    Call(BindNpcInteract, NPC_SELF, Ref(EVS_NpcInteract_Fishmael))
    Return
    End
};

NpcData NpcData_Fishmael = {
    .id = NPC_Fishmael,
    .settings = &N(NpcSettings_Toad_Stationary),
    .pos = { GEN_FISHMAEL_VEC },
    .flags = COMMON_PASSIVE_FLAGS | ENEMY_FLAG_DO_NOT_AUTO_FACE_PLAYER,
    .init = &EVS_NpcInit_Fishmael,
    .yaw = GEN_FISHMAEL_DIR,
    .drops = NO_DROPS,
    .animations = {
        .idle   = ANIM_Fishmael_Idle,
    },
};

#include "world/common/enemy/Bandit.inc.cpp"

EvtScript EVS_NpcInteract_Slyden = {
    // Call(SpeakToPlayer, NPC_Karter, ANIM_Karter_Talk, ANIM_Karter_Idle, 0, MSG_MGM_0004)
    Return
    End
};

EvtScript EVS_NpcInit_Slyden = {
    Call(BindNpcInteract, NPC_SELF, Ref(EVS_NpcInteract_Slyden))
    Return
    End
};

NpcData NpcData_Slyden = {
    .id = NPC_Slyden,
    .settings = &NpcSettings_Bandit_Stationary,
    .pos = { GEN_SLYDEN_VEC },
    .flags = COMMON_PASSIVE_FLAGS,
    .init = &EVS_NpcInit_Slyden,
    .yaw = GEN_SLYDEN_DIR,
    .drops = NO_DROPS,
    .animations = BANDIT_ANIMS,
};

#include "world/common/enemy/FriendlyGloomba_Stationary.inc.cpp"

EvtScript EVS_NpcInteract_Gloomothy = {
    // Call(SpeakToPlayer, NPC_Karter, ANIM_Karter_Talk, ANIM_Karter_Idle, 0, MSG_MGM_0004)
    Return
    End
};

EvtScript EVS_NpcInit_Gloomothy = {
    Call(BindNpcInteract, NPC_SELF, Ref(EVS_NpcInteract_Gloomothy))
    Return
    End
};

NpcData NpcData_Gloomothy = {
    .id = NPC_Gloomothy,
    .settings = &NpcSettings_FriendlyGloomba_Stationary,
    .pos = { GEN_GLOOMOTHY_VEC },
    .flags = COMMON_PASSIVE_FLAGS,
    .init = &EVS_NpcInit_Gloomothy,
    .yaw = GEN_GLOOMOTHY_DIR,
    .drops = NO_DROPS,
    .animations = FRIENDLY_GLOOMBA_ANIMS,
};

NpcGroupList DefaultNPCs = {
    NPC_GROUP(NpcData_HarryT),
    NPC_GROUP(NpcData_Grob),
    NPC_GROUP(NpcData_Karter),
    NPC_GROUP(NpcData_BarrT),
    NPC_GROUP(NpcData_Fishmael),
    NPC_GROUP(NpcData_Slyden),
    NPC_GROUP(NpcData_Gloomothy),
    {},
};

EvtScript EVS_Main = {
    Call(SetSpriteShading, SHADING_NONE)
    EVT_SETUP_CAMERA_NO_LEAD(0, 0, 0)
    // Call(SetMusicTrack, 0, SONG_SHOOTING_STAR_SUMMIT, 0, 8)
    Exec(EVS_TexPan)
    // Call(DisablePlayerInput, true)
    // Call(DisablePlayerPhysics, true)
    Call(MakeNpcs, true, Ref(DefaultNPCs))
    Return
    End
};

}; // namespace prt_00

MapSettings prt_00_settings = {
    .main = &prt_00::EVS_Main,
    .entryList = &prt_00::Entrances,
    .entryCount = ENTRY_COUNT(prt_00::Entrances),
    .background = &gBackgroundImage,
};

s32 prt_00_map_init(void) {
    sprintf(wMapBgName, "shp_bg");
    return false;
}
