#include <iostream>
using namespace std;

class Electricity
{
int units, rate;

public:
Electricity()
{
units = 100;
rate = 5;
}

int display()
{
int bill;
bill = units * rate;

cout << "Units : " << units << endl;
cout << "Rate : " << rate << endl;
cout << "Total Bill : " << bill << endl;

return 0;
}
};

int main()
{
Electricity e;
e.display();
return 0;
}
