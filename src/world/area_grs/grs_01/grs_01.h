#include "common.h"
#include "generated.h"
#include "message_ids.h"
#include "map.h"
#include "../grs.h"

#include "mapfs/grs_01_shape.h"
#include "mapfs/grs_01_hit.h"

#include "sprite/npc/SpearGuy.h"

namespace grs_01 {

enum {
    NPC_Goomba1,
    NPC_Goomba2,
    NPC_SpikedGoomba,
    NPC_KoopaTroopa1,
    NPC_KoopaTroopa2,
    NPC_Kroxin,
};

enum {
    MV_EnemiesDefeated = MapVar(0),
    MV_PadlockEntityID = MapVar(1),
};

extern EvtScript EVS_Main;
extern EvtScript EVS_BindExitTriggers;
extern EvtScript EVS_TexPan;
extern EvtScript EVS_SetFoliage;
extern EvtScript EVS_UnlockSpring;
extern EvtScript EVS_MakeEntities;
extern EvtScript EVS_SpawnEnemyChest;

}; // namespace grs_01
