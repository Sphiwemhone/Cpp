#include <iostream>
#include <cstring>
using namespace std;

class Person {
private:
    char name[100];
    int studentID;
    int age;

public:
    // 1. init()
    void init(const char* inputName, int inputID, int inputAge) {
        strcpy(name, inputName);     // copy name
        studentID = inputID;         // save ID
        age = inputAge;              // save age
    }

    // 2. printStudentInfo()
    void printStudentInfo() {
        cout << "Name: " << name << endl;
        cout << "Student ID: " << studentID << endl;
        cout << "Age: " << age << endl;
    }

    // 3. getID()
    int getID() {
        return studentID;
    }

    // 4. getAge()
    int getAge() {
        return age;
    }

    // 5. getName()
    const char* getName() {
        return name;
    }
};

// 6. personSwap()
void personSwap(Person &p1, Person &p2) {
    Person temp;

    temp = p1;   // store p1
    p1 = p2;     // copy p2 into p1
    p2 = temp;   // copy temp into p2
}

int main() {
    Person p1, p2;

    p1.init("Sphiwe", 1207, 20);
    p2.init("Mary", 2010, 22);

    cout << "Before Swap:\n";
    p1.printStudentInfo();
    cout << endl;
    p2.printStudentInfo();

    personSwap(p1, p2);

    cout << "\nAfter Swap:\n";
    p1.printStudentInfo();
    cout << endl;
    p2.printStudentInfo();

    return 0;
}