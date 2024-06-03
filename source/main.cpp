#define TESLA_INIT_IMPL
#include "views/main-view.hpp"
#include <tesla.hpp>

class OverlayDwich : public tsl::Overlay {
public:
                                             
    virtual void initServices() override {}
    virtual void exitServices() override {}

    virtual void onShow() override {}
    virtual void onHide() override {}

    virtual std::unique_ptr<tsl::Gui> loadInitialGui() override {
        return initially<pkDwich>();
    }
};

int main(int argc, char **argv) {
    return tsl::loop<OverlayDwich>(argc, argv);
}
