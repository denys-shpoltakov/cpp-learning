#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums = {1, 2, 3, 4}; // Input: nums = [1,2,3,4] | Output: [1,3,6,10]
    int result;
    
    // nums[1] = nums[0] + nums[1];
    // nums[2] = nums[1] + nums[2];
    // nums[3] = nums[2] + nums[3];
    for (int i = 0; i < nums.size(); i++) {
        // продолжу на работе
    }

    for (int i = 0; i < nums.size(); i++) {
        std::cout << nums[i] << " ";
    }
}