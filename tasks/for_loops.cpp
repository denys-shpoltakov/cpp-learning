#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v;
    for (int i = 0; i < 5; i++) {
        int number = (i + 1) * 10;
        v.push_back(number);
    }
    for (int i = 0; i < 5; i++) {
        v[i] = v[i] * 2;
    }
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
}