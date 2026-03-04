#include "KentCKoopa.h"

NpcSettings NpcSettings_KentCKoopa = {
    .height = 68,
    .radius = 80,
    .onHit = &EnemyNpcHit,
    .onDefeat = &EnemyNpcDefeat,
    .level = ACTOR_LEVEL_NONE,
};
