# include <iostream>
using namespace std;
class Distance
{
    private:
    int feet;
    float inches;
    public:
    Distance():feet(0),inches(0)
    {

    }
    Distance(int f,float i):feet(f),inches(i)
    {

    }
    void showdata()
    {
        cout<<feet<<"/"<<inches<<endl;
    }
   float square();
};
float Distance ::square()
{ 
float fltfeet = feet + inches/12; 
float feetsqrd = fltfeet * fltfeet;
return feetsqrd; 
}
int main()
{
Distance dist(3, 6.0); //two-arg constructor (3’-6”)
float sqft;
sqft = dist.square(); 

cout << "\nDistance = "; dist.showdata();
cout << "nSquare = " << sqft << "square feet\n";
return 0;
}
