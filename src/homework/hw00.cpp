#include "checker.h"

static bool ID0() {
    Vec V;

    // Add your student ID and message here, in ascending student ID order.
    V.emplace_back("112062139", "Be happy.");
    V.emplace_back("112062205", "I hope to deepen my understanding of modern C++.");
    V.emplace_back("113062206", "hi");
    V.emplace_back("114061130",
                   "My Asian parents cried when they heard I'm learning C++ instead of A++");
    V.emplace_back("123000007", "Example student: I want to learn C++ and Git.");

    return isGoodVector(0, V);
}

REGISTER_HOOK(ID0);
