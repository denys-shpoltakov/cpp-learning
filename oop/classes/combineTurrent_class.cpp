#include <iostream>
using namespace std;

class Target {
private:
    int m_hp;
public:
    Target(int hp) : m_hp(hp) {};

    void takeDamage(int damage) {
        m_hp -= damage;
        if (m_hp <= 0) {
            m_hp = 0;
        }
    }

    int getHP() {
        return m_hp;
    }

    bool isAlive() {
        return m_hp > 0;
    }
};

class Turret {
private:
    int m_damage;
    int m_ammo;
    int m_maxAmmo;

public:
    Turret(int damage, int ammo, int maxAmmo) : m_damage(damage), m_ammo(ammo), m_maxAmmo(maxAmmo) {};

    void attack(Target &t) {
        if (m_ammo > 0) {
            m_ammo -= 1;
            t.takeDamage(m_damage);
        } else if (m_ammo <= 0) {
            cout << "Click! No ammo" << endl;
        }
    }

    void reload(int amount) {
        m_ammo += amount;
        if (m_ammo > m_maxAmmo) {
            m_ammo = m_maxAmmo;
        }
        cout << "Your gun has been reloaded, your current ammo: " << m_ammo << endl;
    }
};

int main() {
    Target barrel(50);
    Turret combineTurret(15, 2, 30);
    combineTurret.attack(barrel);
    cout << "Barrel HP: " << barrel.getHP() << endl;
    combineTurret.attack(barrel);
    cout << "Barrel HP: " << barrel.getHP() << endl;
    combineTurret.attack(barrel);
    combineTurret.reload(30);
    cout << "Barrel HP: " << barrel.getHP() << endl;
    combineTurret.attack(barrel);
    cout << "Barrel HP: " << barrel.getHP() << endl;
    combineTurret.attack(barrel);
    cout << "Barrel HP: " << barrel.getHP() << endl;
    combineTurret.attack(barrel);
    cout << "Barrel HP: " << barrel.getHP() << endl;
}