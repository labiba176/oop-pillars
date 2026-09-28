#include <iostream>
using namespace std;

class PaymentReceiver {
public:
    virtual void accept() = 0;
};

class JazzCash : public PaymentReceiver {
public:
    void accept() {
        cout << "Payment confirmed via JazzCash wallet" << endl;
    }
};

class EasyPaisa : public PaymentReceiver {
public:
    void accept() {
        cout << "Payment confirmed via EasyPaisa mobile account" << endl;
    }
};

int main() {
    JazzCash jc;
    EasyPaisa ep;
    jc.accept();
    ep.accept();
    return 0;
}
