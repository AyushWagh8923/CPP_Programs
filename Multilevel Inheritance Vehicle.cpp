#include <iostream>
#include <string>
using namespace std;

class Vehicle
{
public:
Vehicle()
{
cout << "This is a vehicle\n";
}
};

class FourWheeler : public Vehicle
{
public:
FourWheeler()
{
cout << "4 wheeler vehicle\n";
}
};

class Car : public FourWheeler
{
public:
Car()
{
cout << "This 4 wheeler vehicle is a car";
}
};

int main()
{
Car obj;
return 0;
}
