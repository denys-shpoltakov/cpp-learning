#include <iostream>
using namespace std;

// 1. Напиши функцию здесь
// void applyAdrenaline( ... ) { ... }

    void applyAdrenaline(int* hp) {
        *hp = *hp * 2;
    }

int main() {
    int myHealth = 50;

    cout << "Health before: " << myHealth << endl;

    int* health = &myHealth;
    applyAdrenaline(health);
    // 2. Вызови функцию здесь, передав адрес myHealth
    // applyAdrenaline( ... );

    cout << "Health after: " << myHealth << endl; 
    
    // В итоге должно вывести 100
    return 0;
}