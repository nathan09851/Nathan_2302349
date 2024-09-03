#include <iostream>
#include <string>
using namespace std;

class student {
    int rno;
    string name;
    double fee;

public:
    
    student(int no, const string& n, double f) : rno(no), name(n), fee(f) {
        cout << "Parameterized constructor called" << endl;
    }
    
    student(const student& t) : rno(t.rno), name(t.name), fee(t.fee) {
        cout << "Copy constructor called" << endl;
    }

    
    void display() const {
        cout << rno << "\t" << name << "\t" << fee << endl;
    }
};

int main() {
    student s(23023, "fgd", 1000);
    s.display();

    student fdg(s); 
    fdg.display();

    return 0;
}
