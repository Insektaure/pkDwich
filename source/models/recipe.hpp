#pragma once

#include <vector>
#include <string>

struct RecipeItems {
    std::string name;
    int quantity;
};

struct RecipeBonus {
    std::string name;
    std::string type;
    int level;
};

struct Recipe {
    std::vector<RecipeItems> items;
    std::vector<RecipeBonus> bonuses;
};