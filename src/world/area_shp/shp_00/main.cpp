#include "shp_00.hpp"
#include "effects.h"
#include "dx/debug_menu.h"

namespace shp_00 {

EntryList Entrances = { GEN_ENTRY_LIST };

// #include "world/common/enemy/Clubbeard.inc.cpp"

// EvtScript EVS_Scene_CaptainKuriboPreBattle = {
//     Call(DisablePlayerInput, true)
//     Call(SetNpcAnimation, NPC_CaptainKuribo, ANIM_CaptainKuribo_Still)
//     Call(PlaySoundAtNpc, NPC_CaptainKuribo, SOUND_LARGE_ACTOR_JUMP, SOUND_SPACE_DEFAULT)
//     Call(GetPlayerPos, LVar0, LVar1, LVar2)
//     Add(LVar0, 50)
//     Call(NpcJump0, NPC_CaptainKuribo, LVar0, LVar1, LVar2, 30)
//     Call(DisablePlayerInput, false)
//     Return
//     End
// };

// EvtScript EVS_Scene_CaptainKuriboDefeated = {
//     Call(DisablePlayerInput, true)
//     Call(SetEncounterStatusFlags, ENCOUNTER_FLAG_THUMBS_UP, false)
//     Call(SetNpcAnimation, NPC_CaptainKuribo, ANIM_CaptainKuribo_Dead)
//     Call(SetNpcPos, NPC_CaptainKuribo, NPC_DISPOSE_LOCATION)
//     Wait(30)
//     Call(GetPlayerPos, LVar0, LVar1, LVar2)
//     Call(UseSettingsFrom, CAM_DEFAULT, LVar0, LVar1, LVar2)
//     Call(SetCamSpeed, CAM_DEFAULT, Float(4.0))
//     Call(SetPanTarget, CAM_DEFAULT, LVar0, LVar1, LVar2)
//     Call(PanToTarget, CAM_DEFAULT, 0, true)
//     Call(WaitForCam, CAM_DEFAULT, Float(1.0))
//     Call(RemoveNpc, NPC_CaptainKuribo)
//     Call(RemoveNpc, NPC_Goomate_Red)
//     Call(RemoveNpc, NPC_Goomate_Blue)
//     Call(DisablePlayerInput, false)
//     Return
//     End
// };

// NpcSettings NpcSettings_CaptainKuribo = {
//     .height = 68,
//     .radius = 80,
//     .onHit = &EnemyNpcHit,
//     .onDefeat = &EnemyNpcDefeat,
//     .level = ACTOR_LEVEL_CAPTAIN_KURIBO,
// };

// EvtScript EVS_NpcIdle_CaptainKuribo = {
//     Loop(0)
//         Call(GetSelfVar, 0, LVar0)
//         IfEq(LVar0, 1)
//             BreakLoop
//         EndIf
//         Wait(1)
//     EndLoop
//     Call(DisablePlayerInput, true)
//     Call(SetNpcAnimation, NPC_SELF, ANIM_CaptainKuribo_Angry)
//     Call(StartBossBattle, SONG_GOOMBA_KING_BATTLE)
//     Call(DisablePlayerInput, false)
//     Return
//     End
// };

EvtScript EVS_NpcInteract_CaptainKuribo = {
    // Call(SpeakToPlayer, NPC_SELF, ANIM_ShyGuy_Black_Anim11, ANIM_ShyGuy_Black_Anim01, 0, MSG_CH4_0046)
    // Call(EndSpeech, NPC_SELF, ANIM_ShyGuy_Black_Anim13, ANIM_ShyGuy_Black_Anim01, 0)
    // Call(ShowChoice, MSG_Choice_0004)
    // IfEq(LVar0, 0)
        // Wait(5)
        // Call(ContinueSpeech, NPC_SELF, ANIM_ShyGuy_Black_Anim11, ANIM_ShyGuy_Black_Anim01, 0, MSG_CH4_0049)
        // Call(SetNpcVar, NPC_SELF, 0, 1)
    // Else
            // Call(ContinueSpeech, NPC_SELF, ANIM_ShyGuy_Black_Anim11, ANIM_ShyGuy_Black_Anim01, 0, MSG_CH4_0049)
        // EndIf
    // EndIf
    // Return
    // End
};

// EvtScript EVS_NpcDefeat_CaptainKuribo = {
//     Call(GetBattleOutcome, LVar0)
//     Switch(LVar0)
//         CaseEq(OUTCOME_PLAYER_WON)
//             Exec(EVS_Scene_CaptainKuriboDefeated)
//         CaseEq(OUTCOME_PLAYER_LOST)
//         CaseEq(OUTCOME_PLAYER_FLED)
//     EndSwitch
//     Call(DisablePlayerInput, false)
//     Return
//     End
// };

// EvtScript EVS_NpcInit_CaptainKuribo = {
//     Call(BindNpcIdle, NPC_SELF, Ref(EVS_NpcIdle_CaptainKuribo))
//     Call(BindNpcInteract, NPC_SELF, Ref(EVS_NpcInteract_CaptainKuribo))
//     Call(BindNpcDefeat, NPC_SELF, Ref(EVS_NpcDefeat_CaptainKuribo))
//     Return
//     End
// };

// NpcData NpcData_CaptainKuribo = {
//     .id = NPC_CaptainKuribo,
//     .settings = &NpcSettings_CaptainKuribo,
//     .pos = { NPC_DISPOSE_LOCATION },
//     .flags = ENEMY_FLAG_DO_NOT_KILL | ENEMY_FLAG_IGNORE_WORLD_COLLISION | ENEMY_FLAG_NO_DELAY_AFTER_FLEE | ENEMY_FLAG_ACTIVE_WHILE_OFFSCREEN | ENEMY_FLAG_NO_DROPS | NPC_FLAG_IGNORE_PLAYER_COLLISION,
//     .init = &EVS_NpcInit_CaptainKuribo,
//     .yaw = 0,
//     .drops = NO_DROPS,
//     .animations = {
//         .idle   = ANIM_CaptainKuribo_Idle,
//         .walk   = ANIM_CaptainKuribo_Walk,
//         .run    = ANIM_CaptainKuribo_Run,
//         .chase  = ANIM_CaptainKuribo_Run,
//         .anim_4 = ANIM_CaptainKuribo_Idle,
//         .anim_5 = ANIM_CaptainKuribo_Idle,
//         .death  = ANIM_CaptainKuribo_Dead,
//         .hit    = ANIM_CaptainKuribo_Dead,
//         .anim_8 = ANIM_CaptainKuribo_Run,
//         .anim_9 = ANIM_CaptainKuribo_Run,
//         .anim_A = ANIM_CaptainKuribo_Run,
//         .anim_B = ANIM_CaptainKuribo_Run,
//         .anim_C = ANIM_CaptainKuribo_Run,
//         .anim_D = ANIM_CaptainKuribo_Run,
//         .anim_E = ANIM_CaptainKuribo_Run,
//         .anim_F = ANIM_CaptainKuribo_Run,
//     },
// };

// NpcGroupList IntroNPCs = {
//     NPC_GROUP((NpcData_CaptainKuribo), 0, 1),
//     {}
// };

EvtScript EVS_EnterMap = {
    Call(GetEntryID, LVar0)
    Switch(LVar0)
    CaseEq(0)
        Call(SetPlayerPos, GEN_MARIO_POS_VEC)
        // ExecWait(EVS_Scene_CaptainKuriboPreBattle)
    EndSwitch
    Return
    End
};

EvtScript EVS_Main = {
    Call(SetSpriteShading, SHADING_NONE)
    EVT_SETUP_CAMERA_NO_LEAD(0, 0, 0)
    Call(ClearAmbientSounds, 250)
    Call(FadeOutMusic, 0, 1000)
    Call(PlayAmbientSounds, AMBIENT_SEA)
    // Call(EnableGroup, MODEL_SmallShip, false)
    // Call(MakeNpcs, false, Ref(IntroNPCs))
    Exec(EVS_EnterMap)
    Wait(1)
    Return
    End
};

}; // namespace shp_00

MapSettings shp_00_settings = {
    .main = &shp_00::EVS_Main,
    .entryList = &shp_00::Entrances,
    .entryCount = ENTRY_COUNT(shp_00::Entrances),
    .background = &gBackgroundImage,
};
