#pragma once

#include "../components/button.hpp"
#include <functional>
#include <tesla.hpp>

class RecipeView : public tsl::Gui {
    
 public:
  RecipeView(const std::string &type) : type(type) { }
  ~RecipeView() {};

  virtual tsl::elm::Element *createUI() override {
    auto frame = new tsl::elm::OverlayFrame("Recipe", type);
    auto list = new tsl::elm::List();


    list->addItem(new tsl::elm::CategoryHeader("Ingredients"));

    /*for (Ingredient& ingredient : serving.ingredients) {
        list->addItem(new tsl::elm::ListItem(std::to_string(ingredient.quantity.quantity) + "x " + ingredient.name));
        //std::cout << "Ingredient: " << ingredient.name << ", Quantity: " << ingredient.quantity.quantity << std::endl;
    }*/

    frame->setContent(list);

    return frame;
  }

 private:
  std::string type;
};


class RecipeViewButton : public Button {
 public:
  RecipeViewButton(const std::string &text, const std::string &type) 
    : Button(text), type(type) { 
        this->onClick([this]() { tsl::changeTo<RecipeView>(this->type); });
    }

 private:
  std::string type;
};