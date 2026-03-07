#include "area.hpp"

#include "battle/common/newstage/shp_bt00.inc.cpp"
#include "battle/common/newstage/shp_bt00.hpp"

#include "battle/common/newstage/trp_bt00.inc.cpp"
#include "battle/common/newstage/trp_bt00.hpp"

#include "battle/common/newstage/nok_bt01.inc.cpp"
#include "battle/common/newstage/nok_bt01.hpp"

#include "battle/common/newstage/sbk_bt02.inc.cpp"
#include "battle/common/newstage/sbk_bt02.hpp"

#include "battle/common/newstage/kmr_bt04.inc.cpp"
#include "battle/common/newstage/kmr_bt04.hpp"

// #include "battle/common/newactor/goomba_and_paragoomba_and_spiked_goomba.inc.cpp"
// #include "battle/common/newactor/goomba_and_paragoomba_and_spiked_goomba.hpp"

// #include "battle/common/newactor/koopa_troopa.inc.cpp"
// #include "battle/common/newactor/koopa_troopa.hpp"

// #include "battle/common/newactor/spear_guy.inc.cpp"
// #include "battle/common/newactor/spear_guy.hpp"

// #include "battle/common/newactor/jungle_fuzzy.inc.cpp"
// #include "battle/common/newactor/jungle_fuzzy.hpp"

// #include "battle/common/newactor/pokey.inc.cpp"
// #include "battle/common/newactor/pokey.hpp"

// #include "battle/common/newactor/bandit.inc.cpp"
// #include "battle/common/newactor/bandit.hpp"

// #include "battle/common/newactor/cleft.inc.cpp"
// #include "battle/common/newactor/cleft.hpp"

#include "battle/common/newactor/captain_kuribo.inc.cpp"
#include "battle/common/newactor/captain_kuribo.hpp"

#include "battle/common/newactor/red_and_blue_mate.inc.cpp"
#include "battle/common/newactor/red_and_blue_mate.hpp"

#include "battle/common/newactor/super_blooper_and_baby_blooper.inc.cpp"
#include "battle/common/newactor/super_blooper_and_baby_blooper.hpp"

#include "battle/common/newactor/clubbeard_and_green_heart.inc.cpp"
#include "battle/common/newactor/clubbeard_and_green_heart.hpp"

// #include "battle/common/newactor/kent_c_koopa.inc.cpp"
// #include "battle/common/newactor/kent_c_koopa.hpp"

#include "battle/common/newactor/buzzar.inc.cpp"
#include "battle/common/newactor/buzzar.hpp"

#include "battle/common/newactor/monstar.inc.cpp"
#include "battle/common/newactor/monstar.hpp"

#include "battle/common/newactor/mage_jr_troopa.inc.cpp"
#include "battle/common/newactor/mage_jr_troopa.hpp"

using namespace battle::actor;

namespace battle::area::kmr_part_1 {

Vec3i CaptainKuriboPos = { 120, 0, 30 };
Vec3i RedMatePos = { 60, 0, 20 };
Vec3i BlueMatePos = { 10, 0, 10 };

// Vec3i BlooperPos = { 80, 45, -10 };

Vec3i ClubbeardPos = { 75, 0, 10 };
Vec3i GreenHeart1Pos = { 100, 0, 20 };
Vec3i GreenHeart2Pos = { 125, 0, 30 };

// Vec3i BuzzarPos = { 90, 70, 0 };

// Vec3i MonstarPos = { 75, 16, 5 };

Formation Formation_Goomba1 = { // Formation 0
    OVL_ACTOR_BY_IDX("goomba", BTL_POS_GROUND_B, 10),
    OVL_ACTOR_BY_IDX("goomba", BTL_POS_GROUND_C, 9),
};

Formation Formation_Goomba2 = { // Formation 1
    OVL_ACTOR_BY_IDX("goomba", BTL_POS_GROUND_B, 10),
    OVL_ACTOR_BY_IDX("paragoomba", BTL_POS_AIR_C, 9),
};

Formation Formation_SpikedGoomba = { // Formation 2
    OVL_ACTOR_BY_IDX("goomba", BTL_POS_GROUND_B, 10),
    OVL_ACTOR_BY_IDX("spiked_goomba", BTL_POS_GROUND_C, 9),
};

Formation Formation_KoopaTroopa1 = { // Formation 3
    OVL_ACTOR_BY_IDX("koopa_troopa", BTL_POS_GROUND_B, 10),
    OVL_ACTOR_BY_IDX("koopa_troopa", BTL_POS_GROUND_C, 9),
};

Formation Formation_KoopaTroopa2 = { // Formation 4
    OVL_ACTOR_BY_IDX("koopa_troopa", BTL_POS_GROUND_B, 10),
    OVL_ACTOR_BY_IDX("koopa_troopa", BTL_POS_GROUND_C, 9),
    OVL_ACTOR_BY_IDX("koopa_troopa", BTL_POS_GROUND_D, 8),
};

Formation Formation_Kroxin = { // Formation 5
    OVL_ACTOR_BY_IDX("kroxin", BTL_POS_GROUND_B, 10),
};

Formation Formation_SpearGuy = { // Formation 6
    OVL_ACTOR_BY_IDX("spear_guy", BTL_POS_GROUND_B, 10, .var0 = 1),
};

Formation Formation_JungleFuzzy = { // Formation 7
    OVL_ACTOR_BY_IDX("jungle_fuzzy", BTL_POS_GROUND_B, 10),
};

Formation Formation_Pokey = { // Formation 8
    OVL_ACTOR_BY_IDX("pokey", BTL_POS_GROUND_B, 10),
    OVL_ACTOR_BY_IDX("pokey", BTL_POS_GROUND_C, 9),
};

Formation Formation_Bandit = { // Formation 9
    OVL_ACTOR_BY_IDX("bandit", BTL_POS_GROUND_B, 10),
    OVL_ACTOR_BY_IDX("bandit", BTL_POS_GROUND_C, 9),
};

Formation Formation_Cleft = { // Formation 10
    OVL_ACTOR_BY_IDX("cleft", BTL_POS_GROUND_B, 10),
};

// Formation Formation_SuperBlooper = { // Formation 11
//     ACTOR_BY_POS(SuperBlooper, BlooperPos, 10),
// };

// Formation Formation_CaptainKuribo = { // Formation 12
//     ACTOR_BY_POS(CaptainKuribo, CaptainKuriboPos, 8),
//     ACTOR_BY_POS(RedMate, RedMatePos, 9),
//     ACTOR_BY_POS(BlueMate, BlueMatePos, 10),
// };

// Formation Formation_Clubbeard = { // Formation 13
//     ACTOR_BY_POS(Clubbeard, ClubbeardPos, 10),
//     ACTOR_BY_POS(GreenHeart, GreenHeart1Pos, 9),
//     ACTOR_BY_POS(GreenHeart, GreenHeart2Pos, 8),
// };

// Formation Formation_Buzzar = { // Formation 14
//     ACTOR_BY_POS(Buzzar, BuzzarPos, 10),
// };

// Formation Formation_Monstar = { // Formation 15
//     ACTOR_BY_POS(Monstar, MonstarPos, 10),
// };

// Formation Formation_MageJrTroopa = { // Formation 16
//     ACTOR_BY_IDX(MageJrTroopa, BTL_POS_GROUND_C, 10),
// };

BattleList Battles = {
    BATTLE(Formation_Goomba1, PleasantPath, "Goomba"), // Formation 0
    BATTLE(Formation_Goomba2, PleasantPath, "Paragoomba"), // Formation 1
    BATTLE(Formation_SpikedGoomba, PleasantPath, "Spiked Goomba"), // Formation 2
    BATTLE(Formation_KoopaTroopa1, PleasantPath, "Koopa Troopa Duo"), // Formation 3
    BATTLE(Formation_KoopaTroopa2, PleasantPath, "Koopa Troopa Trio"), // Formation 4
    BATTLE(Formation_Kroxin, PleasantPath, "Kroxin"), // Formation 5
    BATTLE(Formation_SpearGuy, Beach, "Uno Spear Guy"), // Formation 6
    BATTLE(Formation_JungleFuzzy, Beach, "Uno Jungle Fuzzy"), // Formation 7
    BATTLE(Formation_Pokey, DryDryDesert, "Pokey"), // Formation 8
    BATTLE(Formation_Bandit, DryDryDesert, "Bandit"), // Formation 9
    BATTLE(Formation_Cleft, DryDryDesert, "Cleft"), // Formation 10
    // BATTLE(Formation_SuperBlooper, ShipDeck, "Super Blooper"), // Formation 11
    // BATTLE(Formation_CaptainKuribo, ShipDeck, "Captain Kuribo"), // Formation 12
    // BATTLE(Formation_Clubbeard, ShipDeck, "Clubbeard"), // Formation 13
    // BATTLE(Formation_Buzzar, ShipDeck, "Buzzar"), // Formation 14
    // BATTLE(Formation_Monstar, ShipDeck, "Monstar"), // Formation 15
    // BATTLE(Formation_MageJrTroopa, ShipDeck, "Mage Jr. Troopa"), // Formation 16
    {},
};

StageList Stages = {
    STAGE("Forest Path", ForestPath), // Stage 0
    STAGE("Ship Deck", ShipDeck), // Stage 1
    STAGE("Pleasant Path", PleasantPath), // Stage 2
    STAGE("Dry Dry Desert", DryDryDesert), // Stage 3
    STAGE("Beach", Beach), // Stage 4
    {},
};

}; // namespace battle::area::kmr_part_1
