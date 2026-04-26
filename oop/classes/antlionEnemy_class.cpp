#include <iostream>
using namespace std;

class Antlion {
public:
    int m_health;
    string m_type;

    Antlion(int health, string type) : m_health(health), m_type(type) {};

    void takeDamage(int amount) {
        m_health -= amount;
        if (m_health <= 0) {
            m_health = 0;
            cout << "Antlion: " << m_type << " is dead" << " current HP of antlion: " << m_health << endl;
        }
    }
};

int main() {
    Antlion lion(100, "Soldier");

    Antlion* pTarget = &lion;
    pTarget->takeDamage(30);
    cout << pTarget->m_health << endl;

    Antlion* pLion = new Antlion(100, "Worker");
    pLion->takeDamage(50);
    cout << pLion->m_health;
    delete pLion;
    pLion = nullptr; // после удаления обьекта через delete ты ОБЯЗАН занулить указатель
}