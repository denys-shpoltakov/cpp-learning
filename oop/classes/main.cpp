#include <iostream>

class Cat {
    private:
        int happiness;
    
    public:
        Cat(int startHapinness) {
            happiness = startHapinness;
        }

        void pet() {
            if (happiness < 10) {
                happiness += 1;
            } else {
                std::cout << "Y kota limit schiastia!" << std::endl;
            }
        }
        void status() {
            if (happiness >= 8) {
                std::cout << "Kot schastliv!" << std::endl;
            } else if (happiness <= 8 && happiness >= 3) {
                std::cout << "Kot sredne" << std::endl;
            } else {
                std::cout << "Kot zloy!" << std::endl;
            }
        }
};

int main() {
    Cat homeCat(8);
    Cat streetCat(2);
    homeCat.status();
    streetCat.status();
}