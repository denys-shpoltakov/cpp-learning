#include <iostream>
using namespace std;

class Sound {

public:
    virtual void playSound() {
        cout << "*generic silence*" << endl;
    }
};

class ShotSound : public Sound {

public:
    void playSound() override {
        cout << "BANG!" << endl;
    }
};

class ExplosionSound : public Sound {

public:
    void playSound() override {
        cout << "BOOM!" << endl;
    }
};

int main() {

    Sound* sounds[2];

    sounds[0] = new ShotSound;
    sounds[1] = new ExplosionSound;

    for (int i = 0; i < 2; i++) {
        sounds[i]->playSound();
        delete sounds[i];
    }

}