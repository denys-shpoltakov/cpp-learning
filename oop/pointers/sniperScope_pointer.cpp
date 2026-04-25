#include <iostream>
using namespace std;

int main() {
    int enemies[5] = {100, 100, 100, 100, 100};
    int* pTarget = enemies; 

    // 1. Уменьши HP первого врага на 50 через указатель
    *pTarget -= 50;
    
    // 2. Сдвинь указатель на следующего врага
    pTarget++;
    // 3. Уменьши HP текущего врага (второго) на 50 через указатель
    *pTarget -= 50;


    // Твой цикл вывода (напиши его сам, раз обещал)
    for (int i = 0; i < 5; i++) {
        cout << "Enemie's hp: " << enemies[i] << endl;
    }
    return 0;
}