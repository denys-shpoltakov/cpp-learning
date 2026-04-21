#include <iostream>

class Turret {
    private:
        int health = 100;
        int maxHealth = 100;
    
    public:
        void takeDamage(int damage) {
            health -= damage;
            
            if (health > 0) {
                std::cout << "BOOM " << "Turret HP: " << health<< std::endl;
            } else if (health <= 0) {
                health = 0;
                std::cout << "Turret is dead!" << std::endl;
            }
        }
        void repair() {
            if (health > 0) {
                health = maxHealth;
                std::cout << "Your turret was repaired, it hp now is: " << health << std::endl;
            } else {
                std::cout << "Turret is dead!" << std::endl;
            }
        }
};

int main() {
    Turret turret;
    turret.takeDamage(50);
    turret.repair();
    turret.takeDamage(50);
    turret.takeDamage(50);
    turret.repair();
    turret.takeDamage(50);
}