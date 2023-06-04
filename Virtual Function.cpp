# include <iostream>
using namespace std;
// virtual function or Polymorphism.
class base{
	public:
  virtual void display()
		{
			cout<<"base class"<<endl;
		}
		
};
class child:public base{
	public:
	void display()
		{
			cout<<"child class"<<endl;
		}
		
	
};
class parent:public child{
	public:
	void display()
		{
			cout<<"parent class"<<endl;
		}
};
int main()
{

	base *ptr=new parent;

ptr->display();
}
