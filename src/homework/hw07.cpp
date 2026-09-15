#include "checker.h"

static bool ID7() {
    Vec V;

    // Add your student ID and message here, in ascending student ID order.
    V.emplace_back("114062631", "Snoopy has a lot of chocolate.");
    V.emplace_back("123000008", "Example student: I want to learn C++ and Git.");
    V.emplace_back("zr_11420CS3424",
                   "Hope to get a better grasp of modern C++ and large project management.");

    return isGoodVector(7, V);
}

REGISTER_HOOK(ID7);
