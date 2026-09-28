#include <iostream>
using namespace std;

class VolumeFinder {
public:
    int compute(int side) {
        return side * side * side;
    }
    int compute(int l, int w, int h) {
        return l * w * h;
    }
    double compute(double radius, double height) {
        return 3.1416 * radius * radius * height;
    }
};

int main() {
    VolumeFinder vf;
    cout << "Cube Volume: " << vf.compute(3) << endl;
    cout << "Box Volume: " << vf.compute(3, 4, 5) << endl;
    cout << "Cylinder Volume: " << vf.compute(2.0, 5.0) << endl;
    return 0;
}
