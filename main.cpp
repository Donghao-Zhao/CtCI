#include "include.h"

#define CURRENT_PROJECT myString_1_4

int main() {
    cout << endl << "CtCI Project " << endl << endl;
    CtCI::CURRENT_PROJECT myProject;
    int exitStatus = myProject.unitTest();
    cout << endl << "Exit Status: " << exitStatus << endl;
    return 0;
}
