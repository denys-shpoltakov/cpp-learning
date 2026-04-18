#include <iostream>
using namespace std;

int main() {
   int playerMoney = 100;
   bool isAdult = true;

   if (playerMoney >= 50 && isAdult)                    // if condition1 is true
   {
        cout << "You can buy a gun" << endl;
   }
   else if (playerMoney < 50 && isAdult)                // if condition1 is false and condition2 is true
   {
        cout << "You do not have enough money" << endl;
   }
   else {                                               // if both conditions are false
        cout << "You are not adult" << endl;
   }

   int time = 11;

   if (time < 12) {
       cout << "Good morning!" << endl;
   
    } else if (time < 18) {
        cout << "Good day!" << endl;

    } else {
        cout << "Good evening!" << endl;

   }
}