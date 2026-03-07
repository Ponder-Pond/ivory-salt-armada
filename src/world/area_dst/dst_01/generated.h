/* auto-generated, do not edit */
#include "star_rod_macros.h"

// type: MapProperties
#define GEN_MAP_LOCATION LOCATION_GOOMBA_ROAD

// type: EntryList
#define GEN_ENTRY_LIST \
    { -1030.0,    0.0,    0.0,    0.0 },

// type: TexPanner
#define GEN_TEX_PANNER_1 \
    TEX_PAN_PARAMS_ID(TEX_PANNER_1) \
    TEX_PAN_PARAMS_STEP(     0,   400,     0,     0) \
    TEX_PAN_PARAMS_FREQ(     0,     1,     0,     0) \
    TEX_PAN_PARAMS_INIT(     0,     0,     0,     0)

// type: Marker:Entry
// name: Entry0
#define GEN_ENTRY0_X -1030
#define GEN_ENTRY0_Y 0
#define GEN_ENTRY0_Z 0
#define GEN_ENTRY0_DIR 0
#define GEN_ENTRY0_VEC -1030,0,0

// type: Marker:NPC
// name: Pokey1
// anim: ANIM_Pokey_Idle4
#define GEN_POKEY1_X -343
#define GEN_POKEY1_Y 0
#define GEN_POKEY1_Z 260
#define GEN_POKEY1_DIR 0
#define GEN_POKEY1_VEC -343,0,260
#define GEN_POKEY1_TERRITORY \
{ \
    .wander = { \
        .centerPos   = { -343, 0, 260 }, \
        .wanderSize  = { 200 }, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .detectPos   = { -343, 0, 260 }, \
        .detectSize  = { 400 }, \
        .detectShape = SHAPE_CYLINDER, \
        .isFlying = TRUE, \
    }, \
}

// type: Marker:NPC
// name: Bandit1
// anim: ANIM_Bandit_Idle
#define GEN_BANDIT1_X 255
#define GEN_BANDIT1_Y 0
#define GEN_BANDIT1_Z 594
#define GEN_BANDIT1_DIR 0
#define GEN_BANDIT1_VEC 255,0,594
#define GEN_BANDIT1_TERRITORY \
{ \
    .wander = { \
        .centerPos   = { 255, 0, 594 }, \
        .wanderSize  = { 50 }, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .detectPos   = { 255, 0, 594 }, \
        .detectSize  = { 500 }, \
        .detectShape = SHAPE_CYLINDER, \
        .isFlying = TRUE, \
    }, \
}

// type: Marker:NPC
// name: Pokey2
// anim: ANIM_Pokey_Idle4
#define GEN_POKEY2_X -38
#define GEN_POKEY2_Y 0
#define GEN_POKEY2_Z -512
#define GEN_POKEY2_DIR 0
#define GEN_POKEY2_VEC -38,0,-512
#define GEN_POKEY2_TERRITORY \
{ \
    .wander = { \
        .centerPos   = { -38, 0, -512 }, \
        .wanderSize  = { 200 }, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .detectPos   = { -38, 0, -512 }, \
        .detectSize  = { 400 }, \
        .detectShape = SHAPE_CYLINDER, \
        .isFlying = TRUE, \
    }, \
}

// type: Marker:NPC
// name: Bandit2
// anim: ANIM_Bandit_Idle
#define GEN_BANDIT2_X 490
#define GEN_BANDIT2_Y 0
#define GEN_BANDIT2_Z -205
#define GEN_BANDIT2_DIR 0
#define GEN_BANDIT2_VEC 490,0,-205
#define GEN_BANDIT2_TERRITORY \
{ \
    .wander = { \
        .centerPos   = { 490, 0, -205 }, \
        .wanderSize  = { 50 }, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .detectPos   = { 490, 0, -205 }, \
        .detectSize  = { 500 }, \
        .detectShape = SHAPE_CYLINDER, \
        .isFlying = TRUE, \
    }, \
}

// type: Marker:NPC
// name: Cleft
// anim: ANIM_Cleft_Anim14
#define GEN_CLEFT_X 93
#define GEN_CLEFT_Y 0
#define GEN_CLEFT_Z 254
#define GEN_CLEFT_DIR 0
#define GEN_CLEFT_VEC 93,0,254
#define GEN_CLEFT_TERRITORY \
{ \
    .wander = { \
        .centerPos   = { 93, 0, 254 }, \
        .wanderSize  = { 0 }, \
        .moveSpeedOverride = NO_OVERRIDE_MOVEMENT_SPEED, \
        .wanderShape = SHAPE_CYLINDER, \
        .detectPos   = { 93, 0, 254 }, \
        .detectSize  = { 125 }, \
        .detectShape = SHAPE_CYLINDER, \
        .isFlying = TRUE, \
    }, \
}

// type: Marker:Entity:Chest
// name: Chest
#define GEN_CHEST_X 0
#define GEN_CHEST_Y 0
#define GEN_CHEST_Z -610
#define GEN_CHEST_DIR 0
#define GEN_CHEST_VEC 0,0,-610
#define GEN_CHEST_XYZA 0, 0, -610, 0
#define GEN_CHEST_PARAMS GEN_CHEST_XYZA

// type: Marker:Entity:YellowBlock
// name: YellowBlock
#define GEN_YELLOW_BLOCK_X 479
#define GEN_YELLOW_BLOCK_Y 60
#define GEN_YELLOW_BLOCK_Z -360
#define GEN_YELLOW_BLOCK_DIR 0
#define GEN_YELLOW_BLOCK_VEC 479,60,-360
#define GEN_YELLOW_BLOCK_XYZA 479, 60, -360, 0
#define GEN_YELLOW_BLOCK_ITEM ITEM_REPEL_GEL
#define GEN_YELLOW_BLOCK_PARAMS GEN_YELLOW_BLOCK_XYZA, GEN_YELLOW_BLOCK_ITEM
#define GEN_YELLOW_BLOCK_FLAG GF_DST01_ItemBlock_RepelGel

// type: Marker:Entity:MulticoinBlock
// name: MulticoinBlock
#define GEN_MULTICOIN_BLOCK_X 479
#define GEN_MULTICOIN_BLOCK_Y 60
#define GEN_MULTICOIN_BLOCK_Z -360
#define GEN_MULTICOIN_BLOCK_DIR 0
#define GEN_MULTICOIN_BLOCK_VEC 479,60,-360
#define GEN_MULTICOIN_BLOCK_XYZA 479, 60, -360, 0
#define GEN_MULTICOIN_BLOCK_PARAMS GEN_MULTICOIN_BLOCK_XYZA
#define GEN_MULTICOIN_BLOCK_FLAG GF_DST01_MulticoinBlock

// type: Marker:Entity:Chest
// name: EnemyChest
#define GEN_ENEMY_CHEST_X 75
#define GEN_ENEMY_CHEST_Y 80
#define GEN_ENEMY_CHEST_Z -40
#define GEN_ENEMY_CHEST_DIR 0
#define GEN_ENEMY_CHEST_VEC 75,80,-40
#define GEN_ENEMY_CHEST_XYZA 75, 80, -40, 0
#define GEN_ENEMY_CHEST_PARAMS GEN_ENEMY_CHEST_XYZA

// type: Marker:Entity:Item
// name: DriedFruit
#define GEN_DRIED_FRUIT_X 446
#define GEN_DRIED_FRUIT_Y 27
#define GEN_DRIED_FRUIT_Z 432
#define GEN_DRIED_FRUIT_DIR 0
#define GEN_DRIED_FRUIT_VEC 446,27,432
#define GEN_DRIED_FRUIT_PARAMS GEN_DRIED_FRUIT_ITEM, GEN_DRIED_FRUIT_VEC, GEN_DRIED_FRUIT_SPAWN, GEN_DRIED_FRUIT_FLAG
#define GEN_DRIED_FRUIT_ITEM ITEM_DRIED_FRUIT
#define GEN_DRIED_FRUIT_SPAWN ITEM_SPAWN_MODE_FIXED_NEVER_VANISH
#define GEN_DRIED_FRUIT_FLAG GF_DST01_ItemDriedFruit

// type: Marker:Position
// name: Tree1
#define GEN_TREE1_X 594
#define GEN_TREE1_Y 0
#define GEN_TREE1_Z -66
#define GEN_TREE1_DIR 0
#define GEN_TREE1_VEC 594,0,-66

// type: Marker:Position
// name: Bush1
#define GEN_BUSH1_X -102
#define GEN_BUSH1_Y 0
#define GEN_BUSH1_Z -331
#define GEN_BUSH1_DIR 0
#define GEN_BUSH1_VEC -102,0,-331

