#include "trp_00.h"
#include "foliage.hpp"

namespace trp_00 {

DEFINE_PALM_TREE(PalmTree1, MODEL_TreeLeaves, MODEL_Coconuts, MODEL_TreeTrunk, GEN_PALM_TREE1_VEC, 0.0f)

EvtScript EVS_SetFoliage = {
    BIND_TREE(PalmTree1, COLLIDER_PalmTree)
    Return
    End
};

}; // namespace trp_00
