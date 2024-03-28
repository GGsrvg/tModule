module;

#include <string>

export module ttt.Anchor;

export namespace interface {
    class View;

    class Anchor {
    private:
        View* view;
        std::string key;
    public:
        Anchor(View* view, std::string key);

        void print();
    };
}