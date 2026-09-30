#include <iostream>

using namespace std;

int main() {
    cout << 1 << endl;
    for (int i = 0; i < 2; i++) {
        cout << 2 << endl;
    }
    for (int i = 0; i < 3; i++) {
        cout << 3 << endl;
    }
    cout << 4 << endl;
    for (int i = 0; i < 5; i++) {
        cout << 5 << endl;
    }
    cout << 6 << endl;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Hello" << endl;
    }
}