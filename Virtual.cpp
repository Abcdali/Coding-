# include <iostream>
using namespace std;
class base{
	public:
	virtual 	void display()
		{
			cout<<"Base class "<<endl;
		}
		
};
class child : public base{
	public:
		void display()
		{
			cout<<"Child Class "<<endl;
		}
		
};
class child1: public child{
	public:
		void display()
		{
			cout<<"Child 1 Class"<<endl;
		}
};
int main()
{
	base *ptr=new child;
	ptr->display();
}
