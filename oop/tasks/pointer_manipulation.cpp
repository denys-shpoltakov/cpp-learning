#include <iostream>
using namespace std;

int main() {

    int ammo = 30;

    int* ptr = &ammo;

    *ptr = 0;

    cout << ammo << endl;

}