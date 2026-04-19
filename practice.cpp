#include <iostream>

using namespace std;
struct Item {
    string name;
    int damage;
};

struct Fighter {
    string name;
    int hp;
    int power;
    Item weapon;
};


void showInfo(Fighter &info) {
    int totalDamage = info.power + info.weapon.damage;
    if (info.hp < 0) {
        info.hp = 0;
    }
    cout << "Figher name: " << info.name << " Fighter HP: " << info.hp << " Fight power: " << totalDamage << " Items: " << info.weapon.name << endl;
};

void makeHit(Fighter &attacker, Fighter &victim) {
    int totalDamage = attacker.power + attacker.weapon.damage;
    victim.hp -= totalDamage;
    cout << attacker.name << " hits " << victim.name << " dealing " << totalDamage << " damage!" << endl;
};

int main() {
    Item items[2];
    Fighter fighters[2];

    // Items characteristics
    
    items[0].name = "Fists";
    items[0].damage = 0;

    
    items[1].name = "Sword";
    items[1].damage = 20;
    
    // Fighters characteristics
    fighters[0].name = "Stalker";
    fighters[0].hp = 100;
    fighters[0].power = 20;
    fighters[0].weapon = items[1];
    
    
    fighters[1].name = "Rebel";
    fighters[1].hp = 100;
    fighters[1].power = 30;
    fighters[1].weapon = items[1];

    // fighting system until someone will have 0 hp

    while (fighters[0].hp > 0 && fighters[1].hp > 0) {
        makeHit(fighters[0], fighters[1]);

        if (fighters[1].hp > 0) {
            makeHit(fighters[1], fighters[0]);
        }
    }
    showInfo(fighters[0]);
    showInfo(fighters[1]);
};