#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<std::string> items = {"Medkit", "Pistol", "Crowbar"}; 
    int enemies[5] = {10, 45, 90, 15, 120};
    
    for (int i = 10; i != 0; --i) {
        std::cout << i << std::endl;
    }
    std::cout << "BOOM!" << std::endl;
    // for (int i = 0; i < 3; i++) {
    //     cout << items[i] << " " << endl;
    // }
    for ( int i = 0; i < items.size(); ++i) {
        std::cout << items[i] << " " << std::endl;
    }

    for (int i = 0; i < 5; ++i) {
        if (enemies[i] > 80) {
            std::cout << "Enemy: " << i << ": CRITICAL DANGER!" << std::endl;
        } else {
            std::cout << "Enemy: " << i << ": Normal" << std::endl;
        }
    }
}