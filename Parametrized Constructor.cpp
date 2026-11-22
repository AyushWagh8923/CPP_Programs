#include <iostream>
#include <string>
using namespace std;

class Student
{
int rollNo;
string name;
float marks;

public:
Student(int r, string n, float m)
{
rollNo = r;
name = n;
marks = m;
}

void display()
{
cout << "Student Details" << endl;
cout << "Roll No : " << rollNo << endl;
cout << "Name : " << name << endl;
cout << "Marks : " << marks << endl;
}
};

int main()
{
Student s(101, "Rahul", 85.5);
s.display();

return 0;
}
