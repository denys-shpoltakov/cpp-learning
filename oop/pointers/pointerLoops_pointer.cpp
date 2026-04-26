#include <iostream>
using namespace std;

int main() {
    string wingmans[5] {"John", "Anna", "Bob", "Odessa", "Barney"};

    string* pWingmans = wingmans;
    int i = 0;

    while (i < 5) {
        cout << *pWingmans << endl;
        i++;
        pWingmans++;
    }
}