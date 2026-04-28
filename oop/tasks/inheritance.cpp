#include <iostream>
using namespace std;

class Item {
public:
    string name;
};

class Medkit : public Item {
public:
    int healAmount;
};

int main() {

Item medkit;
medkit.name = "Medkit";
Medkit medicalKit;
medicalKit.healAmount = 50;
medicalKit.name = "Medkit";

cout << medkit.name << endl;
cout << medicalKit.name << endl;
cout << medicalKit.healAmount << endl;

}