# include <iostream>
using namespace std;
class happy{
	public:
		getdata()
		{
			cout<<"King"<<endl;
		}
		getdata(int x)
		{
			cout<<"X = "<<x<<endl;
		}
	~happy()
		{
		cout<<"DELETE"<<endl;	
		}
};
class sad:public happy{
	public:
		getdata()
		{
			cout<<"Queen"<<endl;
		}
	sad(int x,float a):happy()
	{
		cout<<"A = "<<a<<endl;
	}
	~sad()
	
	{
		cout<<"SAD Delete "<<endl;
	}
};
class dumpty:public happy{
	public:
		getdata()
		{
			cout<<"Devil"<<endl;
		}
		getdata(char m)
		{
			cout<<m<<endl;
		}
	~dumpty()
	{
		cout<<"Dumpty"<<endl;
	}

};
int main()
{
	sad* h1=new sad(2,3.4);
	cout<<"allowed"<<endl;
	happy* h2=new dumpty();
	delete h1;
	happy* h3=new happy();
	delete h2;
	
	
//	int arr[5]={1,2,3,4,5};
//  int 	*ptr;
//  ptr=arr;
//	for(int i=0;i<5;i++)
//	{
////		cout<<*(arr+i)<<endl;
////		cout<<arr[i]<<endl;
//cout<<*(ptr++)<<endl;
//	}


//	int a=3;
//int b=5;
//cout<<"a = "<<&a<<endl;
//cout<<"b = "<<&b<<endl;
//int *ptr;
//ptr=&a;
//cout<<"a = "<<*ptr<<endl;
//ptr=&b;
//cout<<"b = "<<*ptr<<endl;

}

