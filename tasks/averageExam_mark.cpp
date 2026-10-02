#include <iostream>

int main()
{
    int n;
    int sum = 0;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        double examsCount;
        std::cin >> examsCount;
        sum = sum + examsCount;
    }
    double averageScore = (double)sum / n;
    std::cout << averageScore;
}