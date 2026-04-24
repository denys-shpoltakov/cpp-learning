#include <iostream>
using namespace std;

class Turret {

public:
    void shoot(int* targetHP) { 
        *targetHP -= 25;
    }
};

int main() {
    int intruderHealth = 100;
    Turret myTurret;

    Turret* p = &myTurret;
    int* health = &intruderHealth;
    p->shoot(health);

    cout << "Health after shot: " << intruderHealth;
}