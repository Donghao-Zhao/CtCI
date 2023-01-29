#include "main.h"

#define CURRENT_PROJECT myString_2_1

int main() {
    cout << endl << "CtCI Project " << endl << endl;
    CtCI::CURRENT_PROJECT myProject;
    int exitStatus = myProject.unitTest();
    cout << endl << "Exit Status: " << exitStatus << endl;
    return 0;
}
