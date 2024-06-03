#pragma once

#include "../../components/button.hpp"
#include "../recipe-view.hpp"
#include <tesla.hpp>

class MonotypeView : public tsl::Gui {
 public:
  MonotypeView() { }

  virtual tsl::elm::Element *createUI() override {
    auto frame = new tsl::elm::OverlayFrame("Monotype (Salty HM)", " ");
    auto list = new tsl::elm::List();

    list->addItem(new tsl::elm::CategoryHeader("Type"));

    list->addItem(new RecipeViewButton("Bug", "Bug"));
    list->addItem(new RecipeViewButton("Dark", "Dark"));
    list->addItem(new RecipeViewButton("Dragon", "Dragon"));
    list->addItem(new RecipeViewButton("Electric", "Electric"));
    list->addItem(new RecipeViewButton("Fairy", "Fairy"));
    list->addItem(new RecipeViewButton("Fighting", "Fighting"));
    list->addItem(new RecipeViewButton("Fire", "Fire"));
    list->addItem(new RecipeViewButton("Flying", "Flying"));
    list->addItem(new RecipeViewButton("Ghost", "Ghost"));
    list->addItem(new RecipeViewButton("Grass", "Grass"));
    list->addItem(new RecipeViewButton("Ground", "Ground"));
    list->addItem(new RecipeViewButton("Ice", "Ice"));
    list->addItem(new RecipeViewButton("Normal", "Normal"));
    list->addItem(new RecipeViewButton("Psychic", "Psychic"));
    list->addItem(new RecipeViewButton("Rock", "Rock"));
    list->addItem(new RecipeViewButton("Steel", "Steel"));
    list->addItem(new RecipeViewButton("Water", "Water"));

    frame->setContent(list);

    return frame;
  }

};

class MonotypeViewButton : public Button {
 public:
  MonotypeViewButton() : Button("Monotype (Salty HM)") { this->onClick(tsl::changeTo<MonotypeView>); }
};