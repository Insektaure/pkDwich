#pragma once

#include "../../components/button.hpp"
#include "../../models/za-donuts.hpp"
#include "../recipe-view.hpp"
#include <tesla.hpp>

class ZADonutsView : public tsl::Gui {
 public:
  ZADonutsView() { }

  virtual tsl::elm::Element *createUI() override {
    auto frame = new tsl::elm::OverlayFrame("Story Donuts", "Fixed Donuts Recipes");
    auto list = new tsl::elm::List();

    list->addItem(new tsl::elm::CategoryHeader("Donuts"));

    list->addItem(new RecipeViewButton("Bad Dreams Cruller", "Bad Dreams Cruller", BadDreamsCruller));
    list->addItem(new RecipeViewButton("Delta Old Fashioned Donut", "Delta Old Fashioned Donut", DeltaOldFashionedDonut));
    list->addItem(new RecipeViewButton("Delta Old Fashioned Donut (Alt)", "Delta Old Fashioned Donut (Alt)", DeltaOldFashionedDonutAlt));
    list->addItem(new RecipeViewButton("Omega Old Fashioned Donut", "Omega Old Fashioned Donut", OmegaOldFashionedDonut));
    list->addItem(new RecipeViewButton("Omega Old Fashioned Donut (Alt 1)", "Omega Old Fashioned Donut (Alt 1)", OmegaOldFashionedDonutAlt1));
    list->addItem(new RecipeViewButton("Omega Old Fashioned Donut (Alt 2)", "Omega Old Fashioned Donut (Alt 2)", OmegaOldFashionedDonutAlt2));
    list->addItem(new RecipeViewButton("Alpha Old Fashioned Donut", "Alpha Old Fashioned Donut", AlphaOldFashionedDonut));
    list->addItem(new RecipeViewButton("Alpha Old Fashioned Donut (Alt 1)", "Alpha Old Fashioned Donut (Alt 1)", AlphaOldFashionedDonutAlt1));
    list->addItem(new RecipeViewButton("Plasma-Glazed Donut", "Plasma-Glazed Donut", PlasmaGlazedDonut));
    list->addItem(new RecipeViewButton("Plasma-Glazed Donut (Alt 1)", "Plasma-Glazed Donut (Alt 1)", PlasmaGlazedDonutAlt1));

    frame->setContent(list);

    return frame;
  }

};

class ZADonutsViewButton : public Button {
 public:
  ZADonutsViewButton() : Button("Story Donuts") { this->onClick(tsl::changeTo<ZADonutsView>); }
};