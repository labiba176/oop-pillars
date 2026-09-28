#include <iostream>
using namespace std;

class Compressor {
public:
    virtual void compressFile() = 0;
};

class ZipCompress : public Compressor {
public:
    void compressFile() {
        cout << "Archiving files into ZIP format" << endl;
    }
};

class RarCompress : public Compressor {
public:
    void compressFile() {
        cout << "Archiving files into RAR format" << endl;
    }
};

int main() {
    ZipCompress zc;
    RarCompress rc;
    zc.compressFile();
    rc.compressFile();
    return 0;
}
