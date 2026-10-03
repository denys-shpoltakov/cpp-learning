/*
Напишите функцию int getMax(int a, int b, int c), которая принимает три числа, находит среди них максимальное и возвращает его. В функции main запросите у пользователя три числа, вызовите вашу функцию и выведите результат.
*/
#include <iostream>

int getMax(int a, int b, int c) {

    if (a >= b && a >= c) {
        return a;
    } else if (b >= a && b >= c) {
        return b;
    } else {
        return c;
    }

}

int main()
{
    int num1, num2, num3;
    std::cout << "Enter three numbers: ";
    std::cin >> num1 >> num2 >> num3;

    int result = getMax(num1, num2, num3);

    std::cout << "Max number is: " << result << std::endl;
}