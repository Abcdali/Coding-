# include<iostream>
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
    Distance(float fltfeet)
    {
        feet = int( fltfeet);
        inches= 12*(fltfeet-feet);
    }
    void showdata()
    {
        cout<<feet<<"/"<<inches<<endl;
    }
    friend Distance operator +(Distance ,Distance);
   
} ;
Distance operator +(Distance d1,Distance d2)
{
    int f= d1.feet+d2.feet;
    float i=d1.inches+ d2.inches;
    if(i>=12.0)
    {
     i=12.0;
     f++;
    }
    return Distance(f,i);
}
int main()
{
    Distance d1=2.5;
    Distance d2=12.5;
    Distance d3;
   cout<<"Distance d1 = ";
   d1.showdata();
      cout<<"Distance d2 = ";
	  d2.showdata();
    d3=d1+10.0;
    cout<<"Distance d3 = ";
	d3.showdata();
    d3=10.0+d1;
    d3.showdata();
    return 0;
}
