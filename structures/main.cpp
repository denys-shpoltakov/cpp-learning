#include <iostream>

using namespace std;

    struct Player {
    string name;
    int level;
    int hp;
};

void printStats(const Player &p) { // & - do not copy, just look on original! const - just read data, no edit
    cout << "Name: " << p.name << " Level: " << p.level << " Player HP: " << p.hp << endl;
}

void heal(Player &unit) {
    unit.hp += 50;
}

int main() {

    Player squad[3];
    squad[0].name = "Alyx";
    squad[0].level = 10;
    squad[0].hp = 100;


    squad[1].name = "Barney";
    squad[1].level = 8;
    squad[1].hp = 100;


    squad[2].name = "Gordon Freeman";
    squad[2].level = 10;
    squad[2].hp = 100;


    squad[1].hp = squad[1].hp - 20;

    for (int i = 0; i < 3; i++) {
        printStats(squad[i]);
    }

    heal(squad[1]);
    printStats(squad[1]);
}