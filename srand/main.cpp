#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int damage = 10;
    int criticalDamage;
    srand(time(0));
    int criticalDamageChance = 1 + (rand() % 100); // минимальный_порог + rand() % диапазон

    if (criticalDamageChance <= 15) {
        criticalDamage = damage * 2;
    } else {
        criticalDamage = damage;
    }

    cout << criticalDamage;
}