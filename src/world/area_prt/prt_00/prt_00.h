#include "common.h"
#include "generated.h"
#include "message_ids.h"
#include "map.h"
#include "../prt.h"

#include "mapfs/prt_00_shape.h"
#include "mapfs/prt_00_hit.h"

#include "sprite/npc/HarryT.h"
#include "sprite/npc/WorldBobomb.h"
#include "sprite/npc/Archeologist.h"
#include "sprite/npc/ToadGuard.h"
#include "sprite/npc/Fishmael.h"
#include "sprite/npc/Bandit.h"
#include "sprite/npc/FriendlyGoomba.h"

namespace prt_00 {

enum {
    NPC_HarryT,
    NPC_Grob,
    NPC_Karter,
    NPC_BarrT,
    NPC_Fishmael,
    NPC_Dryden,
    NPC_Slyden,
    NPC_Gloomothy,
};

extern EvtScript EVS_Main;
extern EvtScript EVS_BindExitTriggers;
extern EvtScript EVS_TexPan;

}; // namespace prt_00
