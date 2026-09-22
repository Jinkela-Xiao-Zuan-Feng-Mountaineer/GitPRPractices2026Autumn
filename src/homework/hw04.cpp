#include "checker.h"

static bool ID4() {
    Vec V;

    // Add your student ID and message here, in ascending student ID order.
    V.emplace_back("112062337", "teacher and TA are so handsome");
    V.emplace_back("113062301", "IF I WERE DJ WILL YOU LOVE ME?");
    V.emplace_back("114062214", "Cabi Cabi I love Snorlax");
    V.emplace_back("114062317", "I want to learn C++ and Git.");
    V.emplace_back("114062601", "Hello");
    V.emplace_back("115065524", "That's right, Gojo Satoru wins.");
    V.emplace_back("123000003", "Example student: I want to learn C++ and Git.");

    return isGoodVector(4, V);
}

REGISTER_HOOK(ID4);
