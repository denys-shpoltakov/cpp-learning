#include <iostream>
#include <vector>

int main() {
    std::vector<std::vector<int>> accounts = {
      {1,5},
      {1,3}  
    };

    int maxWealth = 0;

    for (int i = 0; i < accounts.size(); i++) {
        int currentCustomerSum = 0;
        for (int j = 0; j < accounts[i].size(); j++) {
            currentCustomerSum = currentCustomerSum + accounts[i][j];
        }
        if (currentCustomerSum > maxWealth) {
            maxWealth = currentCustomerSum;
        }
    }
    std::cout << maxWealth;
}