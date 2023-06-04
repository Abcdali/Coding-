# include <iostream>
using namespace std;
class baseclass{
	
	public:
		int n;
		void display()
		{
		cout<<"number base  = "<<n<<endl;
		
		}
};
class derivedclass:public baseclass{

	public:
			int a;
		void display()
		{
			cout<<"number base  = "<<n<<endl;
			cout<<"number derived = "<<a<<endl;
		}
};

int main()
{

	baseclass *ptr;
	baseclass obj;
	ptr=&obj;
	ptr->n=34;
	ptr->display();
	derivedclass *ptr1;
	derivedclass d;
	ptr1=&d;
	ptr1->n=30;
	ptr1->a=134;
	ptr1->display();
  
}
