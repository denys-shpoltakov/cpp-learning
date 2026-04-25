#include <iostream>
using namespace std;

int main() {
    int magazine[10] = {1, 1, 0, 1, 0, 1, 1, 0, 1, 1};
    int* pAmmo = magazine; // Указываем на первый патрон
    
    int workingAmmo = 0;
    int count = 0;

    while (count < 10) {
        // 1. Если то, на что указывает pAmmo, равно 1 — увеличивай workingAmmo
        if (*pAmmo == 1) {
            workingAmmo += 1;
        }
        
        // 2. Передвинь указатель на следующий патрон
        pAmmo++;
        
        // 3. Увеличь счетчик count (чтобы цикл не был бесконечным)
        count++;
    }

    cout << "Working ammo: " << workingAmmo << endl;

    return 0;
}