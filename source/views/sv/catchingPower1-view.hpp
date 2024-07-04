#pragma once

#include "../../components/button.hpp"
#include "../../models/powers/catchingPower.hpp"
#include "../recipe-view.hpp"
#include <tesla.hpp>

class CatchingPower1View : public tsl::Gui {
 public:
  CatchingPower1View(const std::string &power) : power(power) { }

  virtual tsl::elm::Element *createUI() override {
    auto frame = new tsl::elm::OverlayFrame(power, "Lv.1");
    auto list = new tsl::elm::List();

    list->addItem(new tsl::elm::CategoryHeader("Type"));

    list->addItem(new RecipeViewButton("Bug", "Bug", CatchingPowerBug1));
    /*list->addItem(new RecipeViewButton("Dark", "Dark", CatchingPowerDark1));
    list->addItem(new RecipeViewButton("Dragon", "Dragon", CatchingPowerDragon1));
    list->addItem(new RecipeViewButton("Electric", "Electric", CatchingPowerElectric1));
    list->addItem(new RecipeViewButton("Fairy", "Fairy", CatchingPowerFairy1));
    list->addItem(new RecipeViewButton("Fighting", "Fighting", CatchingPowerFighting1));
    list->addItem(new RecipeViewButton("Fire", "Fire", CatchingPowerFire1));
    list->addItem(new RecipeViewButton("Flying", "Flying", CatchingPowerFlying1));
    list->addItem(new RecipeViewButton("Ghost", "Ghost", CatchingPowerGhost1));
    list->addItem(new RecipeViewButton("Grass", "Grass", CatchingPowerGrass1));
    list->addItem(new RecipeViewButton("Ground", "Ground", CatchingPowerGround1));
    list->addItem(new RecipeViewButton("Ice", "Ice", CatchingPowerIce1));
    list->addItem(new RecipeViewButton("Normal", "Normal", CatchingPowerCatchingPowerNormal1));
    list->addItem(new RecipeViewButton("Psychic", "Psychic", CatchingPowerPsychic1));
    list->addItem(new RecipeViewButton("Rock", "Rock", CatchingPowerRock1));
    list->addItem(new RecipeViewButton("Steel", "Steel", CatchingPowerSteel1));
    list->addItem(new RecipeViewButton("Water", "Water", CatchingPowerWater1));*/

    frame->setContent(list);

    return frame;
  }

  private:
  std::string power;

  /*Recipe generateRecipeName(const std::string& powerName, const std::string& type, int level) {
    const std::string name = powerName + type + std::to_string(level);

    // populate the vector with the recipe 
    // based on the powerName, type, and level



    return name;
  }*/
};

class CatchingPower1Button : public Button {
 public:
  CatchingPower1Button(const std::string &power, const std::string &level)
    : Button(level), power(power) { 
      this->onClick([this]() { tsl::changeTo<CatchingPower1View>(this->power); });
    }

  private:
  std::string power;
  std::string level;
};