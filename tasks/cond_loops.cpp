#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v;

    for (int i = 1; i < 10; i++) {
        v.push_back(i);
    }
    for (int i = 0; i < v.size(); i++) {
        if (v[i] % 2 == 0) {
            cout << v[i] << " ";
        }
    }
}