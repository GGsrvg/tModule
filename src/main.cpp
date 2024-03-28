import ttt.View;
import ttt.Anchor;

int main () {
    interface::View view = interface::View();
    auto anchor = view.createAnchor();
    anchor.print();
}