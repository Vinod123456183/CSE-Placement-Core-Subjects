#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int r_no, age;
    string grade;

public:
    void setName(string n) {
        if (n.size() == 0) {
            cout << "Invalid Name" << endl;
            return;
        }
        name = n;
    }

    void setRNo(int n) {
        r_no = n;
    }

    void setAge(int n) {
        if (n < 0 || n > 100) {
            cout << "Invalid Age" << endl;
            return;
        }
        age = n;
    }

    void setGrade(string n) {
        grade = n;
    }

    void getName() {
        cout << "Name: " << name << endl;
    }

    void getRNo() {
        cout << "Roll No: " << r_no << endl;
    }

    void getAge() {
        cout << "Age: " << age << endl;
    }

    void getGrade(int pin) {
        if (pin == 123) {
            cout << "Grade: " << grade << endl;
        } else {
            cout << "Access Denied: Incorrect PIN" << endl;
        }
    }
};

int main() {
    Student S1;
    S1.setName("Vinod");
    S1.setRNo(10);
    S1.setAge(20);
    S1.setGrade("A");

    S1.getName();
    S1.getRNo();
    S1.getAge();
    S1.getGrade(123);  // Pass the correct PIN here

    return 0;
}
