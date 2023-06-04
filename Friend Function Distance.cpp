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
    friend float square(Distance);
};
float square (Distance d)
{
	 
float fltfeet = d.feet + d.inches/12; 
float feetsqrd = fltfeet * fltfeet;
return feetsqrd; 
}
int main()
{
Distance dist(3, 6.0); //two-arg constructor (3’-6”)
float sqft;
sqft = square(dist); //return square of dist
cout << "Distance = "; dist.showdata();
cout <<"Square = " << sqft << "Square feet";
return 0;
}
  
