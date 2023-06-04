# include <iostream>
using namespace std;
//class phone{
//	int code;
//	int number;
//	public:
//		setphone(int c,int n)
//		{
//			code=c;
//			number=n;
//		}
//		int getdata()
//		{
//			cout<<"enter a code=";
//			cin>>code;
//			cout<<"enter a number=";
//			cin>>number;
//			
//		}
//		int showdata()
//		{
//			cout<<"code="<<code<<endl;
//			cout<<"number="<<number<<endl;
//			
//		}
//};
//int main()
//{
//	phone p;
//	p.getdata();
//	p.showdata();
//	
//}
class constructor{
	int a;int b;
	public:
		constructor();
		 getdata()
		{
			cout<<"enter a two number=";
			cin>>a>>b;
			
		}
		int showdata()
		{
			cout<<"two number="<<a<<endl<<b<<endl;
		}
};
constructor::constructor()
{
	
}
int main()
{
	constructor c;
	c.getdata();
	c.showdata();
	
}
