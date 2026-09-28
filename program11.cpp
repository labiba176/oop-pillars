#include <iostream>
using namespace std;

class Footwear {
public:
    void wear() {
        cout << "Putting on footwear" << endl;
    }
};

class SportsShoes : public Footwear {
public:
    void run() {
        cout << "Running with grip shoes" << endl;
    }
};

class FormalShoes : public Footwear {
public:
    void polish() {
        cout << "Polishing leather shoes" << endl;
    }
};

int main() {
    SportsShoes ss;
    ss.wear();
    ss.run();

    FormalShoes fs;
    fs.wear();
    fs.polish();
    return 0;
}
