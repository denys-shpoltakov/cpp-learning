#include <iostream>

class LaserRifle {
    private:
        int energy;
        int maxEnergy;
    
    public:
        LaserRifle(int startEnergy, int startMaxEnergy) {
            energy = startEnergy;
            maxEnergy = startMaxEnergy;
        }

        void fire() {
            if (energy >= 10) {
                energy -= 10;
                std::cout << "Bzzzt! Energy left: " << energy << std::endl;
            } else if (energy < 10) {
                std::cout << "Low power! You need to recharge!" << std::endl;
            }
        }
        
        void recharge() {
            energy += 20;
            if (energy > maxEnergy) {
                energy = maxEnergy;
            }
            std::cout << "Recharged! Energy: " << energy << std::endl;
        }
};

int main() {
    LaserRifle gun(100, 100);
    gun.fire();
    gun.fire();
    gun.fire();
    gun.fire();
    gun.fire();
    gun.fire();
    gun.fire();
    gun.fire();
    gun.recharge();
    gun.recharge();
    gun.recharge();
    gun.recharge();
    gun.recharge();
}