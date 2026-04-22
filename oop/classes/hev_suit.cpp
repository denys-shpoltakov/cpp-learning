#include <iostream>
using namespace std;

class HEV_Suit {
private:
    int m_battery;
    float m_reduction;

public:
    HEV_Suit(int battery, float reduction) : m_battery(battery), m_reduction(reduction) {};

    void charge(int amount) {
        m_battery += amount;
        if (m_battery >= 100) {
            m_battery = 100;
        }
    }

    void absorbDamage(int &damage) {
        if (m_battery > 0) {
            m_battery -= 5;
            damage -= (damage * m_reduction);
        };
    }

    int getBattery() {
        return m_battery;
    }
};

int main() {
    HEV_Suit mySuit(50, 0.2);
    int incomingDamage = 10;

    cout << "Incoming damage: " << incomingDamage << endl;

    mySuit.absorbDamage(incomingDamage);

    cout << "Final damage after armor: " << incomingDamage << endl;
    cout << "Battery left: " << mySuit.getBattery() << endl;
}