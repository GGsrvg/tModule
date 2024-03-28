module;

#include <iostream>

module ttt.View;


// #include "View.cppm"
import ttt.Anchor;

namespace interface {
    View::View() {

    };

    void View::leading() {
        std::cout << "leading" << std::endl;
    };

    Anchor View::createAnchor() {
        return Anchor(this, "key111");
    };
}