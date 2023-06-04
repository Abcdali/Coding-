# include <iostream>
using namespace std;
class pointer{
	int a,b;
	public:
		void getdata()
		{
			cout<<"a = "<<a<<endl;
			cout<<"b = "<<b<<endl;
		}
		setdata(int x,int y)
		{
		     a=x;
		     b=y;
		}
};
int main()
{
	pointer p;
	pointer *ptr=&p;
	pointer *ptr1= new pointer;
	ptr1->setdata(1,2);
	ptr1->getdata();
	(*ptr).setdata(1,3);
	(*ptr).getdata();
//	int a=11;
//	int b=12;
//	cout<<"a ="<<&a<<endl;
//		cout<<"b ="<<&b<<endl;
//		int* ptr;
//		ptr=&a;
//		cout<<"value a = "<<*ptr<<endl;
//		ptr=&b;
//		cout<<"value b = "<<*ptr<<endl;
}
