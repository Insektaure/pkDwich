#pragma once

#include "../recipe.hpp"

Recipe EggPower1 = {
    {
        {"Banana", 1},
        {"Peanut Butter", 1},
    },
    {
        {"Egg Power", "", 1},
        {"Item Drop Power", "Electric", 1},
        {"Raid Power", "Bug", 1}
    }
};

Recipe EggPower2 = {
    {
        {"Banana", 1},
        {"Peanut Butter", 1},
        {"Butter", 1},
    },
    {
        {"Egg Power", "", 2},
        {"Raid Power", "Electric", 1},
        {"Exp. Point Power", "Normal", 1}
    }
};

Recipe EggPower3 = {
    {
        {"Banana", 3},
        {"Chorizo", 2},
        {"Sweet Herba Mystica", 1},
    },
    {
        {"Egg Power", "", 3},
        {"Title Power", "Normal", 3},
        {"Item Drop Power", "Electric", 3}
    }
};
