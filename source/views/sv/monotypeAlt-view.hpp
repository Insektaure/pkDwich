#pragma once

#include "../../components/button.hpp"
#include "../../models/monotypeAlt.hpp"
#include "../recipe-view.hpp"
#include <tesla.hpp>

class MonotypeAltView : public tsl::Gui {
 public:
  MonotypeAltView() { }

  virtual tsl::elm::Element *createUI() override {
    auto frame = new tsl::elm::OverlayFrame("Shiny (Alternative)", " ");
    auto list = new tsl::elm::List();

    list->addItem(new tsl::elm::CategoryHeader("Type"));

    list->addItem(new RecipeViewButton("Bug", "Bug", BugAlt));
    list->addItem(new RecipeViewButton("Dark", "Dark", DarkAlt));
    list->addItem(new RecipeViewButton("Dragon", "Dragon", DragonAlt));
    list->addItem(new RecipeViewButton("Electric", "Electric", ElectricAlt));
    list->addItem(new RecipeViewButton("Fairy", "Fairy", Fairy));
    list->addItem(new RecipeViewButton("Fighting", "Fighting", FightingAlt));
    list->addItem(new RecipeViewButton("Fire", "Fire", FireAlt));
    list->addItem(new RecipeViewButton("Flying", "Flying", FlyingAlt));
    list->addItem(new RecipeViewButton("Ghost", "Ghost", GhostAlt));
    list->addItem(new RecipeViewButton("Grass", "Grass", GrassAlt));
    list->addItem(new RecipeViewButton("Ground", "Ground", GroundAlt));
    list->addItem(new RecipeViewButton("Ice", "Ice", IceAlt));
    list->addItem(new RecipeViewButton("Normal", "Normal", NormalAlt));
    list->addItem(new RecipeViewButton("Psychic", "Psychic", PsychicAlt));
    list->addItem(new RecipeViewButton("Rock", "Rock", RockAlt));
    list->addItem(new RecipeViewButton("Steel", "Steel", SteelAlt));
    list->addItem(new RecipeViewButton("Water", "Water", WaterAlt));

    frame->setContent(list);

    return frame;
  }

};

class MonotypeAltViewButton : public Button {
 public:
  MonotypeAltViewButton() : Button("Shiny (Alternative)") { this->onClick(tsl::changeTo<MonotypeAltView>); }
};