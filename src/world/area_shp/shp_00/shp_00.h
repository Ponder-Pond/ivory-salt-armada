#include "common.h"
#include "generated.h"
#include "message_ids.h"
#include "map.h"
#include "../shp.h"

#include "mapfs/shp_00_shape.h"
#include "mapfs/shp_00_hit.h"

#include "sprite/player.h"
#include "sprite/npc/JrTroopa.h"
#include "sprite/npc/CaptainKuribo.h"
// #include "sprite/npc/Goomates.h"

namespace shp_00 {

enum {
    NPC_CaptainKuribo,
};

enum {
    MV_Intro           = MapVar(0),
};

extern EvtScript EVS_Main;

}; // namespace shp_00
