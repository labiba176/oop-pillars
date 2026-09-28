#include <iostream>
using namespace std;

class MobileApp {
public:
    virtual void open() {
        cout << "Generic mobile application opened" << endl;
    }
};

class BankingApp : public MobileApp {
public:
    void open() {
        cout << "Banking app opened with biometric scan" << endl;
    }
};

class CameraApp : public MobileApp {
public:
    void open() {
        cout << "Camera app opened in photo mode" << endl;
    }
};

int main() {
    MobileApp* app;
    BankingApp bApp;
    CameraApp cApp;

    app = &bApp;
    app->open();

    app = &cApp;
    app->open();

    return 0;
}
