#include <iostream>
using namespace std;

class AttendanceRecord {
public:
    int attendMarks;

    void setAttend(int a) {
        attendMarks = a;
    }
};

class AssignmentRecord {
public:
    int assignMarks;

    void setAssign(int a) {
        assignMarks = a;
    }
};

class InternalAssessment : public AttendanceRecord, public AssignmentRecord {
public:
    void showAssessment() {
        cout << "Attendance: " << attendMarks << endl;
        cout << "Assignment: " << assignMarks << endl;
        cout << "Assessment Total: " << attendMarks + assignMarks << endl;
    }
};

int main() {
    InternalAssessment ia;
    ia.setAttend(10);
    ia.setAssign(15);
    ia.showAssessment();
    return 0;
}
