#include <iostream>
using namespace std;

class Money {
public:
    int amount;

    Money() {
        amount = 0;
    }
    Money(int a) {
        amount = a;
    }
    Money operator+(Money m) {
        Money res;
        res.amount = amount + m.amount;
        return res;
    }
    void printMoney() {
        cout << "Money: " << amount << " Rupees" << endl;
    }
};

int main() {
    Money m1(500);
    Money m2(750);
    Money total = m1 + m2;
    total.printMoney();
    return 0;
}
