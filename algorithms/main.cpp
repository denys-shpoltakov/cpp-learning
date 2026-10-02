#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> nums = {2, 4, 3, 5, 6};
    sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size(); i++)
    {
        std::cout << nums[i] << std::endl;
    }
}