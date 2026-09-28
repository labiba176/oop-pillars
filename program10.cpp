#include <iostream>
using namespace std;

class Plant {
public:
    int heightCm;

    void setHeight(int h) {
        heightCm = h;
    }
};

class Tree : public Plant {
public:
    int ageYears;

    void setTree(int h, int a) {
        setHeight(h);
        ageYears = a;
    }
};

class FruitTree : public Tree {
public:
    int fruitYieldKg;

    void setFruitTree(int h, int a, int y) {
        setTree(h, a);
        fruitYieldKg = y;
    }
    void display() {
        cout << "Height: " << heightCm << " cm" << endl;
        cout << "Age: " << ageYears << " years" << endl;
        cout << "Yield: " << fruitYieldKg << " kg" << endl;
    }
};

int main() {
    FruitTree ft;
    ft.setFruitTree(350, 8, 45);
    ft.display();
    return 0;
}
