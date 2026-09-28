#include <iostream>
using namespace std;

class AudioPlayback {
public:
    virtual void emitSound() = 0;
};

class Headphone : public AudioPlayback {
public:
    void emitSound() {
        cout << "Sound played into headphone drivers" << endl;
    }
};

class Speaker : public AudioPlayback {
public:
    void emitSound() {
        cout << "Sound amplified through loud stereo speaker" << endl;
    }
};

int main() {
    Headphone hp;
    Speaker sp;
    hp.emitSound();
    sp.emitSound();
    return 0;
}
