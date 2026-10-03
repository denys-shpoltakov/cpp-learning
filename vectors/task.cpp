#include <iostream>
#include <vector>
#include <algorithm>

/*
Суть: Пользователь вводит число n, а затем n элементов (чисел). Сохраните эти числа в std::vector<int>, а затем выведите их в обратном порядке (с конца к началу).
*/

int main() {
    std::vector<int> nums;
    int n;
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        int numbers;
        std::cin >> numbers;
        nums.push_back(numbers);
    }
    std::cout << "Vector nums: " << std::endl;
    for (int i = nums.size() - 1; i >= 0 ; i--) {
        
        std::cout << nums[i] << " ";
    }
}