#include <iostream>
using namespace std;

class BankCard {
    private:
        int balance;
    
    public:
        BankCard(int startBalance) {
            balance = startBalance;
        }

        void withdraw(int amount) {
            if (amount > balance) {
                cout << "Nedostatochno sredstv" << endl;
            } else if (amount <= 0) {
                cout << "Nedostatochno sredstv ili nelzya snyat 0 deneg" << endl;
            } else {
                balance -= amount;
                cout << "Yspeshnoe snyatie sredstv: " << amount << " Vash balance: " << balance;
            }
        }
};

int main() {
    BankCard test(100);
    test.withdraw(1);
}