#include <iostream>
using namespace std;

int main() {

    int clips[5] = {30, 30, 5, 30, 10};

    for (int i = 0; i < 5; i++) {
        if (clips[i] < 10) {
            cout << "Magazine " << i << " needs reload" << endl;
        }

    }

}
