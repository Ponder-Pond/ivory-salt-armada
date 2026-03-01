#include "common.h"
#include "battle/battle.h"

#include "mapfs/shp_bt00_shape.h"

#define GEN_TEX_PANNER_1 \
    TEX_PAN_PARAMS_ID(TEX_PANNER_1) \
    TEX_PAN_PARAMS_STEP(   175,   200,     0,     0) \
    TEX_PAN_PARAMS_FREQ(     1,     1,     0,     0) \
    TEX_PAN_PARAMS_INIT(     0,     0,     0,     0)

namespace battle::area::kmr_part_1 {

namespace shp_00 {

#include "world/common/atomic/TexturePan.inc.c"

EvtScript EVS_PreBattle = {
    Call(SetSpriteShading, SHADING_NONE)
    Call(SetTexPanner, MODEL_WaterSurface, TEX_PANNER_1)
    Thread
        GEN_TEX_PANNER_1
        Exec(N(EVS_UpdateTexturePan))
    EndThread
    Return
    End
};

EvtScript EVS_PostBattle = {
    Return
    End
};

}; // namespace shp_00

Stage ShipDeck = {
    .texture = "shp_tex",
    .shape = "shp_bt00_shape",
    .hit = "shp_bt00_hit",
    .preBattle = &shp_00::EVS_PreBattle,
    .postBattle = &shp_00::EVS_PostBattle,
    .bg = "shp_bg",
};


}; // namespace battle::area::kmr_part_1
