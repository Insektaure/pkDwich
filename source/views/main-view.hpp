#pragma once

#include "./sv/monotypeSalty-view.hpp"
#include "./sv/monotypeAlt-view.hpp"
#include "./sv/effects-view.hpp"
#include "./swsh/swsh-curries-view.hpp"
#include "./za/za-donuts-view.hpp"
#include <tesla.hpp>

class SVMainView;
class SWSHCurriesView;
class ZAMainView;

class SVMainViewButton : public Button {
 public:
  SVMainViewButton() : Button("Scarlet / Violet") { this->onClick(tsl::changeTo<SVMainView>); }
};

class SWSHCurriesViewButton : public Button {
 public:
  SWSHCurriesViewButton() : Button("Sword / Shield") { this->onClick(tsl::changeTo<SWSHCurriesView>); }
};

class ZAMainViewButton : public Button {
 public:
  ZAMainViewButton() : Button("Legends Z-A") { this->onClick(tsl::changeTo<ZAMainView>); }
};

class GameSelector : public tsl::Gui {
public:
    GameSelector() { }

    virtual tsl::elm::Element* createUI() override {
        
        auto frame = new tsl::elm::OverlayFrame("pkDwich", "v1.0.6");
        auto list = new tsl::elm::List();

        list->addItem(new tsl::elm::CategoryHeader("Select Game"));

        list->addItem(new SWSHCurriesViewButton());
        list->addItem(new SVMainViewButton());
        list->addItem(new ZAMainViewButton());

        frame->setContent(list);

        return frame;
    }
};

class SVMainView : public tsl::Gui {
public:
    SVMainView() { }

    virtual tsl::elm::Element* createUI() override {
        
        auto frame = new tsl::elm::OverlayFrame("Scarlet / Violet", " ");
        auto list = new tsl::elm::List();

        list->addItem(new tsl::elm::CategoryHeader("Recipes"));

        list->addItem(new MonotypeViewButton());
        list->addItem(new MonotypeAltViewButton());

        list->addItem(new tsl::elm::CategoryHeader("Effects"));

        list->addItem(new EffectsViewButton());

        frame->setContent(list);

        return frame;
    }
};

class ZAMainView : public tsl::Gui {
public:
    ZAMainView() { }

    virtual tsl::elm::Element* createUI() override {
        
        auto frame = new tsl::elm::OverlayFrame("Legends ZA", " ");
        auto list = new tsl::elm::List();

        list->addItem(new tsl::elm::CategoryHeader("Recipes"));

        list->addItem(new ZADonutsViewButton());

        frame->setContent(list);

        return frame;
    }
};