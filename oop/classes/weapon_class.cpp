#include <iostream>

class Weapon {
    private:
        int ammo;
        int maxAmmo;
    
    public:
        Weapon(int startAmmo, int startMaxAmmo) {
            ammo = startAmmo;
            maxAmmo = startMaxAmmo;
        }

        void shoot() {
            if (ammo > 0) {
                ammo -= 1;
                std::cout << "Vistrel! Ostalos: " << ammo << std::endl;
            } else if (ammo <= 0) {
                std::cout << "Click! No Ammo! Your ammo: " << ammo << std::endl;
            }
        }
        void reload() {
            ammo = maxAmmo;
            std::cout << "Patronov: " << ammo;
        }
        
};

int main() {

    Weapon glock19(3, 3);
    glock19.shoot();
    glock19.shoot();
    glock19.shoot();
    glock19.shoot();
    glock19.reload();
    glock19.shoot();
}