#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums = {1, 2, 3, 4, 5}; // Input: nums = [1,2,3,4] | Output: [1,3,6,10, 15]
    
    // nums[1] = nums[0] + nums[1];
    // nums[2] = nums[1] + nums[2];
    // nums[3] = nums[2] + nums[3];
    for (int i = 1; i < nums.size(); i++) {
        nums[i] = nums[i - 1] + nums[i];
    }

    // второе решение

    std::vector<int> result;
    int sum = 0; // накопительная переменная

    for (int i = 0; i < nums.size(); i++) {
        sum = sum + nums[i];
        // result.push_back(sum);
    }

    // return result;

    for (int i = 0; i < nums.size(); i++) {
        std::cout << nums[i] << " ";
    }
}