#pragma once

#include "./sv/monotypeSalty-view.hpp"
#include "./sv/monotypeAlt-view.hpp"
#include <tesla.hpp>

class pkDwich : public tsl::Gui {
public:
    pkDwich() { }

    virtual tsl::elm::Element* createUI() override {
        
        auto frame = new tsl::elm::OverlayFrame("pkDwich", "v1.0.0");
        auto list = new tsl::elm::List();

        list->addItem(new tsl::elm::CategoryHeader("Recipes"));

        list->addItem(new MonotypeViewButton());
        list->addItem(new MonotypeAltViewButton());

        frame->setContent(list);

        return frame;
    }
};