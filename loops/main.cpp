#include <iostream>

using namespace std;

int main() {
    string items[3] = {"Medkit", "Pistol", "Grenade"};
    int enemies[5] = {10, 45, 90, 15, 120};
    for (int i = 10; i != 0; i--) {
        cout << i << endl;
    }
    cout << "BOOM!" << endl;
    for (int i = 0; i < 3; i++) {
        cout << items[i] << " " << endl;
    }
    for (int i = 0; i < 5; i++) {
        if (enemies[i] > 80) {
            cout << "Enemy: " << i << ": CRITICAL DANGER!" << endl;
        } else {
            cout << "Enemy: " << i << ": Normal" << endl;
        }
    }
}