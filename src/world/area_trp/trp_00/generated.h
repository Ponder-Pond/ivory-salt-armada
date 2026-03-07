/* auto-generated, do not edit */
#include "star_rod_macros.h"

// type: MapProperties
#define GEN_MAP_LOCATION LOCATION_GOOMBA_ROAD

// type: EntryList
#define GEN_ENTRY_LIST \
    { -560.0,    0.0,    0.0,    0.0 },

// type: TexPanner
#define GEN_TEX_PANNER_1 \
    TEX_PAN_PARAMS_ID(TEX_PANNER_1) \
    TEX_PAN_PARAMS_STEP(     0,   400,     0,     0) \
    TEX_PAN_PARAMS_FREQ(     0,     1,     0,     0) \
    TEX_PAN_PARAMS_INIT(     0,     0,     0,     0)

// type: TexPanner
#define GEN_TEX_PANNER_2 \
    TEX_PAN_PARAMS_ID(TEX_PANNER_2) \
    TEX_PAN_PARAMS_STEP(   150,   150,     0,     0) \
    TEX_PAN_PARAMS_FREQ(     1,     1,     0,     0) \
    TEX_PAN_PARAMS_INIT(     0,     0,     0,     0)

// type: Marker:Entry
// name: Entry0
#define GEN_ENTRY0_X -560
#define GEN_ENTRY0_Y 0
#define GEN_ENTRY0_Z 0
#define GEN_ENTRY0_DIR 0
#define GEN_ENTRY0_VEC -560,0,0

// type: Marker:Entity:HiddenYellowBlock
// name: HiddenYellowBlock
#define GEN_HIDDEN_YELLOW_BLOCK_X -120
#define GEN_HIDDEN_YELLOW_BLOCK_Y 90
#define GEN_HIDDEN_YELLOW_BLOCK_Z -90
#define GEN_HIDDEN_YELLOW_BLOCK_DIR 0
#define GEN_HIDDEN_YELLOW_BLOCK_VEC -120,90,-90
#define GEN_HIDDEN_YELLOW_BLOCK_XYZA -120, 90, -90, 0
#define GEN_HIDDEN_YELLOW_BLOCK_ITEM ITEM_FIRE_FLOWER
#define GEN_HIDDEN_YELLOW_BLOCK_PARAMS GEN_HIDDEN_YELLOW_BLOCK_XYZA, GEN_HIDDEN_YELLOW_BLOCK_ITEM
#define GEN_HIDDEN_YELLOW_BLOCK_FLAG GF_TRP00_ItemBlock_FireFlower

// type: Marker:Entity:Chest
// name: EnemyChest
#define GEN_ENEMY_CHEST_X 125
#define GEN_ENEMY_CHEST_Y 0
#define GEN_ENEMY_CHEST_Z 55
#define GEN_ENEMY_CHEST_DIR -50
#define GEN_ENEMY_CHEST_VEC 125,0,55
#define GEN_ENEMY_CHEST_XYZA 125, 0, 55, -50
#define GEN_ENEMY_CHEST_PARAMS GEN_ENEMY_CHEST_XYZA

// type: Marker:NPC
// name: DockNPC
// anim: ANIM_RussT_Idle
#define GEN_DOCK_NPC_X -450
#define GEN_DOCK_NPC_Y 0
#define GEN_DOCK_NPC_Z 0
#define GEN_DOCK_NPC_DIR 0
#define GEN_DOCK_NPC_VEC -450,0,0
#define GEN_DOCK_NPC_TERRITORY \
{}

// type: Marker:NPC
// name: SpearGuy
// anim: ANIM_SpearGuy_Anim03
#define GEN_SPEAR_GUY_X 125
#define GEN_SPEAR_GUY_Y 0
#define GEN_SPEAR_GUY_Z 55
#define GEN_SPEAR_GUY_DIR 0
#define GEN_SPEAR_GUY_VEC 125,0,55
#define GEN_SPEAR_GUY_TERRITORY \
{ \
    .wander = { \
        .centerPos   = { 125, 0, 55 }, \
        .wanderSize  = { 20 }, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .detectPos   = { 125, 0, 55 }, \
        .detectSize  = { 100 }, \
        .detectShape = SHAPE_CYLINDER, \
        .isFlying = FALSE, \
    }, \
}

// type: Marker:Position
// name: PalmTree1
#define GEN_PALM_TREE1_X -4
#define GEN_PALM_TREE1_Y 0
#define GEN_PALM_TREE1_Z -17
#define GEN_PALM_TREE1_DIR 0
#define GEN_PALM_TREE1_VEC -4,0,-17

