#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> numbers = {3, 2, 4, 6, 7}; // объявляем вектор и присваиваем ему значения
    int first = numbers.front();
    int second = numbers[1];
    int last = numbers.back();
    cout << "first: " << first << endl;
    cout << "second: " << second << endl;
    cout << "last: " << last << endl;
    numbers[0] = 6;
    sort(numbers.begin(), numbers.end());
    for (int i = 0; i < numbers.size(); i++)
    {
        cout << numbers[i] << endl;
    }
    cout << "Max:" << *max_element(begin(numbers), end(numbers)) << endl;
    cout << "Min:" << *min_element(begin(numbers), end(numbers)) << endl;
}