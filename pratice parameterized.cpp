# include <iostream>
using namespace std;
class number{
	int a;
	int b;
	public:
		number()
		{
		a=10;
		b=10;
		}
		number(int y)
		{
			a=y;
			
		}
		number(int ,int);
		int getdata()
		{
			cout<<"value of a="<<a<<endl;
			cout<<"value of b="<<b<<endl;
		}
};
number::number(int x,int y)
{
	a=x;
	b=y;
}
int main()
{
	number n1(1,2),n2,n3(4);
	n1.getdata();
	return 0;
	
}

