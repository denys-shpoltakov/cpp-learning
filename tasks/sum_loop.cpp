#include <iostream>

int main()
{
    int sum = 0;
    // for (int i = 0; i < 3; i = i + 1)
    // {
    //     int number;
    //     std::cin >> number;
    //     sum = sum + number;
    // }

    for (int i = 0; i < 5; i++)
    {
        int number;
        std::cin >> number;
        if (number % 2 == 0)
        {
            sum = sum + number;
        }
        else
        {
            std::cout << "Write only even number" << std::endl;
        }
    }
    std::cout << sum;
}