#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    int towerHP = 1000;
    while (towerHP >= 0) // while loop (цикл while)
    {
        /* code */
        cout << "Tower is under attack! Tower's HP: " << towerHP << endl;
        towerHP = towerHP - 200;
    }
    for (int playerHP = 100; playerHP >= 0; playerHP -=25) // loop for (цикл for)
    {
        cout << "Your hero is under attack! Your current HP: " << playerHP << endl;
    }
    for (int i = 10; i >= 0; i--) // for loop with iterators (цикл for с итератором)
    {
        // Sleep(1000);
        cout << "Your spell on cooldown: " << i << endl;
    }
    cout << "Your spell is ready. Use it!" << endl;
    int playerMana = 0;
    while (playerMana < 100)
    {
        // Sleep(1000);
        playerMana += 15;

        if (playerMana > 100)
        {
            playerMana = 100;
        }
        cout << "Current mana: " << playerMana << endl;
    }
    cout << "Your mana is full!" << endl;
    int secret = 7;
    int guess = 0;
    for (int i = 1; i <= 3; i++)
    {
        cout << "Attempt: " << i << "/3. Enter number: ";
        cin >> guess;

        if (guess == secret)
        {
            cout << "You won!" << endl;
            return 0;
        }
        cout << "Wrong answer! Your attempt: " << i << endl;
    }
    cout << "Game OVER. YOU LOST." << endl;
}
