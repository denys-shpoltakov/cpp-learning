/*
Напиши отдельную функцию с именем isEven (она должна возвращать bool — true, если число четное, и false, если нечетное).
Внутри main() создай вектор с числами от 1 до 5.
Запусти цикл for, который проходит по вектору. 
Внутри цикла вызови свою функцию isEven: если она возвращает true, выведи число на экран.
*/

#include <iostream>
#include <vector>

using namespace std;

bool isEven(int x) {
    return x % 2 == 0;
}

int main() {
    vector<int> v = {1, 2, 3, 4, 5};
    for (int i = 0; i < v.size(); i++) {
        if (isEven(v[i]) == true) {
            cout << v[i] << " ";
        }
    }
}