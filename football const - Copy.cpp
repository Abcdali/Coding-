#include <iostream>
using namespace std;
////////////////////////////////////////////////////////////////
class Distance 
{
private:
int feet;
float inches;
public: //2-arg constructor
Distance(int ft, float in) : feet(ft), inches(in)
{ }
void getdist()  const
{
cout<<"feet="<<feet<<endl;
cout<<"inches="<<inches<<endl;
}

};

int main()
{
const Distance football(300,5);
// football.getdist(); //ERROR: getdist() not const
cout << "football = "<<endl;
football.getdist();

 //OK
cout << endl;
return 0;
}
