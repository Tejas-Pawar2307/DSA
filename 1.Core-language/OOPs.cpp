#include <iostream>
#include <string>
using namespace std;

class Teacher {
private: //Encapsulation.
    double salary;   // data hiding.
public:
    // non-paramterized
    Teacher() {
        dept = "computer engineering";
    }

    // parameterized
    Teacher(string name , string dept , string subject , double salary) {
        this->name = name;
        this->dept = dept;
        this->subject = subject;
        this->salary = salary;
    }

    // copy constructor
    Teacher(Teacher &orgObj) {
        cout << "I am custom Copy constructor....\n";
        this->name = orgObj.name;
        this->dept = orgObj.dept;
        this->subject = orgObj.subject;
        this->salary = orgObj.salary;

    }

    string name;
    string dept;
    string subject; 

    // methods / Member fuctions
    void chageDept (string newDept) {
        dept = newDept;
    }

    void getInfo() {
        cout << "Name :" << name << endl;
        cout << "Subject :" << subject << endl;
    }
};
