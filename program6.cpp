#include <iostream>
using namespace std;

class VehicleBrake {
public:
    virtual void applyBrake() = 0;
};

class DiscBrake : public VehicleBrake {
public:
    void applyBrake() {
        cout << "Disc brake pressed with hydraulic calipers" << endl;
    }
};

class DrumBrake : public VehicleBrake {
public:
    void applyBrake() {
        cout << "Drum brake pressed with friction shoes" << endl;
    }
};

int main() {
    DiscBrake db;
    DrumBrake drb;
    db.applyBrake();
    drb.applyBrake();
    return 0;
}
