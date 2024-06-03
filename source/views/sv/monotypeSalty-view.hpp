#pragma once

#include "../../components/button.hpp"
#include "../../models/monotypeSalty.hpp"
#include "../recipe-view.hpp"
#include <tesla.hpp>

class MonotypeView : public tsl::Gui {
 public:
  MonotypeView() { }

  virtual tsl::elm::Element *createUI() override {
    auto frame = new tsl::elm::OverlayFrame("Shiny (Salty Herba Mystica)", " ");
    auto list = new tsl::elm::List();

    list->addItem(new tsl::elm::CategoryHeader("Type"));

    list->addItem(new RecipeViewButton("Bug", "Bug", Bug));
    list->addItem(new RecipeViewButton("Dark", "Dark", Dark));
    list->addItem(new RecipeViewButton("Dragon", "Dragon", Dragon));
    list->addItem(new RecipeViewButton("Electric", "Electric", Electric));
    list->addItem(new RecipeViewButton("Fairy", "Fairy", Fairy));
    list->addItem(new RecipeViewButton("Fighting", "Fighting", Fighting));
    list->addItem(new RecipeViewButton("Fire", "Fire", Fire));
    list->addItem(new RecipeViewButton("Flying", "Flying", Flying));
    list->addItem(new RecipeViewButton("Ghost", "Ghost", Ghost));
    list->addItem(new RecipeViewButton("Grass", "Grass", Grass));
    list->addItem(new RecipeViewButton("Ground", "Ground", Ground));
    list->addItem(new RecipeViewButton("Ice", "Ice", Ice));
    list->addItem(new RecipeViewButton("Normal", "Normal", Normal));
    list->addItem(new RecipeViewButton("Psychic", "Psychic", Psychic));
    list->addItem(new RecipeViewButton("Rock", "Rock", Rock));
    list->addItem(new RecipeViewButton("Steel", "Steel", Steel));
    list->addItem(new RecipeViewButton("Water", "Water", Water));

    frame->setContent(list);

    return frame;
  }

};

class MonotypeViewButton : public Button {
 public:
  MonotypeViewButton() : Button("Shiny (Salty Herba Mystica)") { this->onClick(tsl::changeTo<MonotypeView>); }
};