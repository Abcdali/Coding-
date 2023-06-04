# include <iostream>
using namespace std;
class number{
	public:
		number()
		{
			cout<<"Constructor"<<endl;
		}
	   getdata(int a,int b)
	   {
	   		cout<<"parametrized Constructor"<<endl;
	   		cout<<a<<endl;
	   }
	   void print()
	   {
	   	cout<<"Constructor"<<endl;
	   }
	   ~number()
	   {
	   	cout<<"Destructor"<<endl;
	   }
	   
};
int main()
{
	number *n=new number[5];
	n[0]=number();
	for(int i=0;i<5;i++)
	{
	n->getdata(0,0);
	n->print();	
	n[i]=number();
	}  
	
	delete[] n;
	
}
