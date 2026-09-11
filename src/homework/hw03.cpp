#include "checker.h"

static bool ID3() {
    Vec V;

    // Add your student ID and message here, in ascending student ID order.
    V.emplace_back("110062161", "Learn something new about new C++.");
    V.emplace_back("112062109", "Can I pass this course? I hope so.");
    V.emplace_back("113062362", "hello, world");
    V.emplace_back("123000002", "Example student: I want to learn C++ and Git.");

    return isGoodVector(3, V);
}

REGISTER_HOOK(ID3);
