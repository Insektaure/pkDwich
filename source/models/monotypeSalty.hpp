#pragma once

#include <vector>
#include <string>

struct RecipeItems {
    std::string name;
    int quantity;
};

struct RecipeBonus {
    std::string name;
    int level;
};

struct Recipe {
    std::vector<RecipeItems> items;
    std::vector<RecipeBonus> bonuses;
};

Recipe Normal = {
    {
        {"Tofu", 1},
        {"Salty Herba Mystica", 1},
        {"Sweet Herba Mystica", 1}
    },
    {
        {"Sparkling Power", 3},
        {"Title Power", 3},
        {"Encounter Power", 3}
    }
};

Recipe Fire = {
    {
        {"Red Pepper", 1},
        {"Salty Herba Mystica", 1},
        {"Sweet Herba Mystica", 1}
    },
    {
        {"Sparkling Power", 3},
        {"Title Power", 3},
        {"Encounter Power", 3}
    }
};

Recipe Water = {
    {
        {"Cucumber", 1},
        {"Salty Herba Mystica", 1},
        {"Sweet Herba Mystica", 1}
    },
    {
        {"Sparkling Power", 3},
        {"Title Power", 3},
        {"Encounter Power", 3}
    }
};

Recipe Electric = {
    {
        {"Yellow Pepper", 1},
        {"Salty Herba Mystica", 1},
        {"Sweet Herba Mystica", 1}
    },
    {
        {"Sparkling Power", 3},
        {"Title Power", 3},
        {"Encounter Power", 3}
    }
};

Recipe Grass = {
    {
        {"Lettuce", 1},
        {"Salty Herba Mystica", 1},
        {"Sweet Herba Mystica", 1}
    },
    {
        {"Sparkling Power", 3},
        {"Title Power", 3},
        {"Encounter Power", 3}
    }
};

Recipe Ice = {
    {
        {"Klawf Stick", 1},
        {"Salty Herba Mystica", 1},
        {"Sweet Herba Mystica", 1}
    },
    {
        {"Sparkling Power", 3},
        {"Title Power", 3},
        {"Encounter Power", 3}
    }
};

Recipe Fighting = {
    {
        {"Pickle", 1},
        {"Salty Herba Mystica", 1},
        {"Sweet Herba Mystica", 1}
    },
    {
        {"Sparkling Power", 3},
        {"Title Power", 3},
        {"Encounter Power", 3}
    }
};

Recipe Poison = {
    {
        {"Green Pepper", 1},
        {"Salty Herba Mystica", 1},
        {"Sweet Herba Mystica", 1}
    },
    {
        {"Sparkling Power", 3},
        {"Title Power", 3},
        {"Encounter Power", 3}
    }
};

Recipe Ground = {
    {
        {"Ham", 1},
        {"Salty Herba Mystica", 1},
        {"Sweet Herba Mystica", 1}
    },
    {
        {"Sparkling Power", 3},
        {"Title Power", 3},
        {"Encounter Power", 3}
    }
};

Recipe Flying = {
    {
        {"Prosciutto", 1},
        {"Salty Herba Mystica", 1},
        {"Sweet Herba Mystica", 1}
    },
    {
        {"Sparkling Power", 3},
        {"Title Power", 3},
        {"Encounter Power", 3}
    }
};

Recipe Psychic = {
    {
        {"Onion", 1},
        {"Salty Herba Mystica", 1},
        {"Sweet Herba Mystica", 1}
    },
    {
        {"Sparkling Power", 3},
        {"Title Power", 3},
        {"Encounter Power", 3}
    }
};

Recipe Bug = {
    {
        {"Cherry Tomato", 1},
        {"Salty Herba Mystica", 1},
        {"Sweet Herba Mystica", 1}
    },
    {
        {"Sparkling Power", 3},
        {"Title Power", 3},
        {"Encounter Power", 3}
    }
};

Recipe Rock = {
    {
        {"Bacon", 1},
        {"Salty Herba Mystica", 1},
        {"Sweet Herba Mystica", 1}
    },
    {
        {"Sparkling Power", 3},
        {"Title Power", 3},
        {"Encounter Power", 3}
    }
};

Recipe Ghost = {
    {
        {"Red Onion", 1},
        {"Salty Herba Mystica", 1},
        {"Sweet Herba Mystica", 1}
    },
    {
        {"Sparkling Power", 3},
        {"Title Power", 3},
        {"Encounter Power", 3}
    }
};

Recipe Dragon = {
    {
        {"Avocado", 1},
        {"Salty Herba Mystica", 1},
        {"Sweet Herba Mystica", 1}
    },
    {
        {"Sparkling Power", 3},
        {"Title Power", 3},
        {"Encounter Power", 3}
    }
};

Recipe Dark = {
    {
        {"Smoked Fillet", 1},
        {"Salty Herba Mystica", 1},
        {"Sweet Herba Mystica", 1}
    },
    {
        {"Sparkling Power", 3},
        {"Title Power", 3},
        {"Encounter Power", 3}
    }
};

Recipe Steel = {
    {
        {"Hamburger", 1},
        {"Salty Herba Mystica", 1},
        {"Sweet Herba Mystica", 1}
    },
    {
        {"Sparkling Power", 3},
        {"Title Power", 3},
        {"Encounter Power", 3}
    }
};

Recipe Fairy = {
    {
        {"Tomato", 1},
        {"Salty Herba Mystica", 1},
        {"Sweet Herba Mystica", 1}
    },
    {
        {"Sparkling Power", 3},
        {"Title Power", 3},
        {"Encounter Power", 3}
    }
};