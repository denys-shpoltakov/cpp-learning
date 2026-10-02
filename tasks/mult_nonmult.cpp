#include <iostream>

int main()
{
    int n;
    int sum = 0;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        int number;
        std::cin >> number;
        if ( number % 2 == 0 && number % 3 != 0)
        {
            sum = sum + number;
        }
    }
    std::cout << sum;
}