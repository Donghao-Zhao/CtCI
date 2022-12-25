#include <iostream>
#include "include.h"

#define CURRENT_PROJECT OneDotOne

int main() {
    std::cout << std::endl << "CtCI Project " << std::endl;
    CtCI::CURRENT_PROJECT myProject;
    myProject.myFoo();
    return 0;
}
