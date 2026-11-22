#include<iostream>
#include<string>
using namespace std;

class vehicle
 {
public:
    vehicle()
     {
      cout<<"This is a Vehicle"<<endl;
     }
  };
class car:public vehicle
{
public:
car()
{
  cout<<"This is a Car"<<endl;
} 
};
int main()
{
  car obj;
  return 0;
}
       
