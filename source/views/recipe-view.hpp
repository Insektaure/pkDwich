#pragma once

#include "../components/button.hpp"
#include "../models/monotypeSalty.hpp"
#include <functional>
#include <tesla.hpp>

class RecipeView : public tsl::Gui {
 public:
  RecipeView(const std::string &type, const Recipe& recipe) : type(type), recipe(recipe) { }
  ~RecipeView() {};

  virtual tsl::elm::Element *createUI() override {
    auto frame = new tsl::elm::OverlayFrame("Recipe", type);
    auto list = new tsl::elm::List();

    // Display RecipeItems
    list->addItem(new tsl::elm::CategoryHeader("Ingredients"));
    for (RecipeItems& item : recipe.items) {
        list->addItem(new tsl::elm::ListItem(std::to_string(item.quantity) + "x " + item.name));
    }

    // Display RecipeBonus
    list->addItem(new tsl::elm::CategoryHeader("Bonuses"));
    for (RecipeBonus& bonus : recipe.bonuses) {
        list->addItem(new tsl::elm::ListItem(bonus.name + " Lvl " + std::to_string(bonus.level)));
    }

    frame->setContent(list);

    return frame;
  }

 private:
  std::string type;
  Recipe recipe;
};

class RecipeViewButton : public Button {
 public:
  RecipeViewButton(const std::string &text, const std::string &type, const Recipe& recipe) 
    : Button(text), type(type), recipe(recipe) { 
        this->onClick([this]() { tsl::changeTo<RecipeView>(this->type, this->recipe); });
    }

 private:
  std::string type;
  Recipe recipe;
};