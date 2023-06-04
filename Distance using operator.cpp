# include <iostream>
using namespace std;
class Distance{
	private:
		 	int feet;
	      float inches;
    public:
    	Distance():feet(0),inches(0)
    	{
    		
		}
	Distance(int n,float f)
	{
		inches=n;
		feet=f;
		 }     
	void display()
	{
		cout<<"Enter a Feet = ";
		cin>>feet;
		cout<<"Enter a inches = ";
		cin>>inches;
	}
	void showdata()
	{
		cout<<"Feet = "<<feet<<endl;
		cout<<"Inchs = "<<inches<<endl;
	} 

     
};
 void	Distance :: operator+=(Distance d2)
{
	feet+=d2.feet;
	inches+=d2.inches;
	if(inches>=12.0)
	{
		inches=12.0;
		feet++;
	}
	}

int main()
{
	Distance d1;
	d1.display();
	d1.showdata();
	Distance d2(11,6.45);
	d2.showdata();
	d1+=d2;
	cout<<"After addition"<<endl;
	d1.showdata();
	cout<<endl;
	return 0;
}
