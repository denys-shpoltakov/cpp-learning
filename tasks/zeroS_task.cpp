#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    int number;
    std::vector<int> nums;
    int counter = 0;
    
    for (int i = 0; i < n; i++) {
        std::cin >> number;
        nums.push_back(number);
    }
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == 0) {
            counter += 1;
        }
    }
    if (counter > 0) {
       std::cout << "YES" << std::endl;
    } else {
       std::cout << "NO" << std::endl;
    }
    return 0;
}