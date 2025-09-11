#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;
public:
    void setPerson(string n, int a) { name = n; age = a; }
    void showPerson() { cout << "Name: " << name << ", Age: " << age << endl; }
};

class Student : public Person {
    string course;
public:
    void setStudent(string n, int a, string c) {
        setPerson(n, a);
        course = c;
    }
    void showStudent() {
        showPerson();
        cout << "Course: " << course << endl;
    }
};

class Teacher :
  public Person {
    string subject;
public:
    void setTeacher(string n, int a, string s) {
        setPerson(n, a);
        subject = s;
    }
    void showTeacher() {
        showPerson();
        cout << "Subject: " << subject << endl;
    }
};

int main() {
    Student s;
    s.setStudent("Ved", 20, "C++ Programming");
    s.showStudent();

    Teacher t;
    t.setTeacher("Pandya", 21, "C Programming");
    t.showTeacher();
    return 0;
}
