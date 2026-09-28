#include <iostream>
#include <string>
using namespace std;

class Faculty {
public:
    string facultyName;

    void setFaculty(string f) {
        facultyName = f;
    }
};

class Lecturer : public Faculty {
public:
    string subjectTaught;

    void setLecturer(string f, string sub) {
        setFaculty(f);
        subjectTaught = sub;
    }
    void showLecturer() {
        cout << "Faculty: " << facultyName << endl;
        cout << "Subject: " << subjectTaught << endl;
    }
};

int main() {
    Lecturer lec;
    lec.setLecturer("Engineering", "Digital Logic Design");
    lec.showLecturer();
    return 0;
}
