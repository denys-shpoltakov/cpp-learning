#include <iostream>
#include <string>
using namespace std;

struct Spell {
    string name;
};

void castSpell(Spell* pSpell) {
    // 1. Добавь проверку: если указатель НЕ пустой, выведи "Casting [имя]"
    // 2. Иначе выведи "No spell stolen yet!"
    if (pSpell != nullptr) {
        cout << "Casting: " << pSpell->name << "!" << endl; 
    } else {
        cout << "No spell stolen yet!" << endl;
    }
}

int main() {
    Spell sunstrike = {"Sunstrike"};
    Spell chaosMeteor = {"Chaos Meteor"};

    Spell* pStolenSpell = nullptr;

    // ШАГ 1: Попробуй вызвать castSpell(pStolenSpell) до кражи
    castSpell(pStolenSpell);
    // ???
    
    // ШАГ 2: "Укради" sunstrike (присвой адрес) и вызови castSpell
    pStolenSpell = &sunstrike;
    castSpell(pStolenSpell);
    // ???

    // ШАГ 3: "Укради" chaosMeteor и вызови castSpell
    pStolenSpell = &chaosMeteor;
    castSpell(pStolenSpell);
    // ???

    return 0;
}