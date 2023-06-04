# include <iostream>
using namespace std;
class number{
	int a;
	int b;
	public:
		getdata()
		{
			cout<<"a = "<<a<<endl;
			cout<<"b = "<<b<<endl;
		}
		showdata(int y,int x)
		{
			x=a;
	        y=b;
		}
};
int main()
{
	number n;
	number *ptr1=&n;
	number *ptr=new number;
	
	ptr->showdata(1,2);
	ptr->getdata();
	(*ptr1).showdata(1,3);
	(*ptr1).getdata();

}
