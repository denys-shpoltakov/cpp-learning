#include <iostream>

using namespace std;

struct Fighter {
    string name;
    int hp;
    int power;
};

void showInfo(const Fighter &info) {
    cout << "Figher name: " << info.name << " Fighter HP: " << info.hp << " Fight power: " << info.power << endl;
}

void makeHit(Fighter &attacker, Fighter &victim) {
    victim.hp -= attacker.power;
    cout << attacker.name << " hits " << victim.name << " dealing " << attacker.power << " damage!" << endl;
}

int main() {
    Fighter fighters[2];

    fighters[0].name = "Stalker";
    fighters[0].hp = 100;
    fighters[0].power = 20;


    fighters[1].name = "Rebel";
    fighters[1].hp = 100;
    fighters[1].power = 30;

    for (int i = 0; i < 2; i++) {
        showInfo(fighters[i]);
    }
    makeHit(fighters[0], fighters[1]);

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