#include "include.h"

#define CURRENT_PROJECT myString_1_2

int main() {
    std::cout << std::endl << "CtCI Project " << std::endl;
    CtCI::CURRENT_PROJECT myProject;
    int exitStatus = myProject.unitTest();
    std::cout << "Exit Status: " << exitStatus << std::endl;
    return 0;
}
