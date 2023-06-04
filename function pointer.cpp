# include <iostream>
using namespace std;
void fun(int*,int*);
int main()
{
	int a=32, b=3;
	cout<<"before swaping = "<<endl;
	cout<<"A = "<<a<<endl;
	cout<<"B = "<<b<<endl;
	swap(&a,&b);
	cout<<"After swaping = "<<endl;

	cout<<"A = "<<a<<endl;
	cout<<"B = "<<b<<endl;
return 0;
	
}
void swap(int* n1,int* n2)

{
	int temp;
	temp=*n1;
	n1=*n2;
	n2=*temp;
	
}
