#include <iostream>
using namespace std;

class A
{
public:
void display()
{
cout << "Superclass A" << endl;
}
};

class B : public A
{
public:
void show()
{
cout << "Subclass show method" << endl;
}
};

class C : public A
{
public:
void display()
{
cout << "Subclass display method" << endl;
}
};

int main()
{
C ob;
ob.display();

B ob1;
ob1.display();
ob1.show();

return 0;
}
