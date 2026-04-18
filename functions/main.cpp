#include <iostream>
using namespace std;

void greetingFunc(string name, int age) {           // void function if we'll return default value like: int, string etc.
    cout << "Hello, " << name << " your age is: " << age << endl;
}

bool checkLevel(int xp) {                           // bool function if we'll return value like: true false (boolean)
    if (xp >= 1000) {
        return true;
    } else {
        return false;
    }
}

float getManaPercent(float currentMana, float maxMana) { // float function if we'll return float value
    float result = currentMana / maxMana;
    return result;
}

int main() {
    string playerName;
    int playerAge;
    cout << "Enter your name: ";
    cin >> playerName ;
    cout << "Enter your age: ";
    cin >> playerAge;
    greetingFunc(playerName, playerAge);

    int playerXP = 1000;
    if (checkLevel(playerXP)) {
        cout << "Your lvl was up" << endl;
    } else {
        cout << "You do not have enough XP" << endl;
    }

    cout << "Mana level: " << getManaPercent(50.0f, 100.0f);
}

