#include <iostream>
using namespace std;

class DeliveryOption {
public:
    virtual void calculateCharge() {
        cout << "Base charge: 100" << endl;
    }
};

class StandardShip : public DeliveryOption {
public:
    void calculateCharge() {
        cout << "Standard delivery charge: 150 PKR" << endl;
    }
};

class FastShip : public DeliveryOption {
public:
    void calculateCharge() {
        cout << "Urgent fast delivery charge: 350 PKR" << endl;
    }
};

int main() {
    DeliveryOption* opt;
    StandardShip ss;
    FastShip fs;

    opt = &ss;
    opt->calculateCharge();

    opt = &fs;
    opt->calculateCharge();

    return 0;
}
