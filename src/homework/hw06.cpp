#include "checker.h"

static bool ID6() {
    Vec V;

    // Add your student ID and message here, in ascending student ID order.
    V.emplace_back("112062119", "I hope to gain a lot from this course !");
    V.emplace_back("112062313", "I want to enhance my understanding of modern C++.");
    V.emplace_back("113062118", "I want to learn more coding about jobs.");
    V.emplace_back("123000001", "Example student: I want to learn C++ and Git.");

    return isGoodVector(6, V);
}

REGISTER_HOOK(ID6);
