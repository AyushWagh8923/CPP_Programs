#include <iostream>
using namespace std;

class Recharge
{
long long number;
int amount;

public:
Recharge()
{
number = 9876543210;
amount = 199;
}

int display()
{
cout << "Mobile Number: " << number << endl;
cout << "Recharge Amount = Rs. " << amount << endl;

return 0;
}
};

int main()
{
Recharge r;
r.display();
return 0;
}
