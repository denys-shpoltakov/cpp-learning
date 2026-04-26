#include <iostream>
using namespace std;

int main() {
    int striderHealth = 200;

    int* pWeapon = &striderHealth;
    *pWeapon -= 50;

    cout << striderHealth << endl;
}