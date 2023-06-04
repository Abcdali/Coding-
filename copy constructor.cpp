#include<iostream>
using namespace std;
class copy{
	int a;
	int b;
	public:
		copy():a(0),b(0){
			
		}
		int getdata()
		{
		cout<<"value of a="<<a<<endl;
		cout<<"value f b="<<b<<endl;
		}
};
int main()
{
	copy c1,c2(1,2);
	c1=c2;
	c1.getdata();
	return 0;
}
