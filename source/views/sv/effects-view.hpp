#pragma once

#include "../../components/button.hpp"
#include "../../models/powers/eggPower.hpp"
#include "./catchingPower1-view.hpp"
#include "../recipe-view.hpp"
#include <tesla.hpp>

class EffectsView : public tsl::Gui {
 public:
  EffectsView() { }

  virtual tsl::elm::Element *createUI() override {
    auto frame = new tsl::elm::OverlayFrame("Effects", "by Power");
    auto list = new tsl::elm::List();

    list->addItem(new tsl::elm::CategoryHeader("Egg Power"));
    list->addItem(new RecipeViewButton("Lv.1", "Egg Power Lv.1", EggPower1));
    list->addItem(new RecipeViewButton("Lv.2", "Egg Power Lv.2", EggPower2));
    list->addItem(new RecipeViewButton("Lv.3", "Egg Power Lv.3", EggPower3));

    /*list->addItem(new tsl::elm::CategoryHeader("Catching Power"));
    list->addItem(new CatchingPower1Button("Catching Power", "Lv.1"));
    list->addItem(new CatchingPower2Button("Catching Power", "Lv.2"));
    list->addItem(new CatchingPower3Button("Catching Power", "Lv.3"));*/

    frame->setContent(list);

    return frame;
  }

};

class EffectsViewButton : public Button {
 public:
  EffectsViewButton() : Button("Effects") { this->onClick(tsl::changeTo<EffectsView>); }
};