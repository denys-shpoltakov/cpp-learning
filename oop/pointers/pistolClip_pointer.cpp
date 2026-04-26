#include <iostream>
using namespace std;

int main() {
    int pistolClip[3] = {1, 1, 1};

    int* pBullet = pistolClip;

    pBullet++;
    *pBullet = 0;

    cout << pistolClip[1];
}