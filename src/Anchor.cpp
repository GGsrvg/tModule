module;
#include <iostream>

module ttt.Anchor;
import ttt.View;

namespace interface {
    
    Anchor::Anchor(View* view, std::string key): view(view), key(key) {

    }

    void Anchor::print() {
        this->view->leading();
        std::cout << "key = " << key << std::endl;
    }
}