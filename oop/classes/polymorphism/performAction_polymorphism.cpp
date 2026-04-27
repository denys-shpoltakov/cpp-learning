#include <iostream>
using namespace std;

class NPC {
public:

    virtual void performAction() { // virtual - говорит компилятору, не вызывай сразу эту функцию. Когда программа будет запущена, посмотри на реальный объект в памяти. Если у него есть своя версия этой функции - вызови её.
        return;          
    }
    
    virtual ~NPC() {}

    
};

class Zombie : public NPC {
    
    void performAction() override {
        cout << "Coming slowly and moaning" << endl;
    }
    
};

class Antlion : public NPC {
    
    /*
    Без override: Компилятор подумает: 
    «Ну, это просто новая функция», и при вызове через NPC* всё равно сработает старая пустая функция. Ты будешь три часа искать баг.

    С override: Компилятор сразу выдаст ошибку: «Эй! Ты сказал, что что-то переопределяешь, но в базовом классе нет функции performActionS! Исправляй».
    */
    void performAction() override { 
        cout << "Running fast and jumping" << endl;
    }
};

class CombineSoldier : public NPC {
    
    void performAction() override {
        cout << "Shooting from riffle and speaking in radio" << endl;
    }
    
};

int main()
{

    // code
    
    NPC* squad[3];
    
    squad[0] = new Zombie();
    squad[1] = new Antlion();
    squad[2] = new CombineSoldier();
    
    for (int i = 0; i < 3; i++) {
        
        squad[i]->performAction();
        delete squad[i];
    }

}