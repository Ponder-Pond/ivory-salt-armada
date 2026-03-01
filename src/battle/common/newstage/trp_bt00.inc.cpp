#include "common.h"
#include "effects.h"
#include "battle/battle.h"

#include "mapfs/jan_bt00_shape.h"

namespace battle::area::kmr_part_1 {

namespace trp_00 {

#include "battle/common/stage/lib/BeachEffects.inc.c"

EvtScript EVS_PreBattle = {
    Call(SetSpriteShading, SHADING_NONE)
    Call(SetCamBGColor, CAM_BATTLE, 0, 0, 0)
    Set(LVar0, MODEL_g88)
    Exec(N(EVS_AnimatePalmLeaves))
    Set(LVar0, MODEL_g89)
    Exec(N(EVS_AnimatePalmLeaves))
    Set(LVar0, MODEL_g86)
    Exec(N(EVS_AnimateWave))
    PlayEffect(EFFECT_SUN, 0, 0, 0, 0, 0, 0, 0)
    Return
    End
};

EvtScript EVS_PostBattle = {
    Return
    End
};

}; // namespace trp_00

Stage Beach = {
    .texture = "jan_tex",
    .shape = "jan_bt00_shape",
    .hit = "jan_bt00_hit",
    .preBattle = &trp_00::EVS_PreBattle,
    .postBattle = &trp_00::EVS_PostBattle,
    .bg = "shp_bg",
};

}; // namespace battle::area::kmr_part_1
