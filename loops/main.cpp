#include <iostream>

using namespace std;

int main() {
    string items[3] = {"Medkit", "Pistol", "Grenade"};
    for (int i = 10; i != 0; i--) {
        cout << i << endl;
    }
    cout << "BOOM!" << endl;
    for (int i = 0; i < 3; i++) {
        cout << items[i] << " ";
    }
}