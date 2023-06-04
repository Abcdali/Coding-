# include <iostream>
using namespace std;
class base{
	private:
		string name;
		int age;
		int id;
	public:
		base():name("/0"),age(0),id(0)
		{
			cout<<"Default constructor"<<endl;
		}
		base(string n,int a,int s):name(n),age(a),id(s)
		{
			cout<<"parameterized Constructor"<<endl;
		}
		void getname()
		{
			cout<<"Enter a name = ";
			cin>>name;
			cout<<"Enter a age = ";
			cin>>age;
			cout<<"Enter a id for student = ";
			cin>>id;
		}
		void showdata()
		{
			cout<<"name = "<<name<<endl;
			cout<<"age = "<<age<<endl;
			cout<<"ID = "<<id<<endl;
		}
		virtual  void display()=0;
		virtual void putdata()=0;
		
	
};
class child: public base{
	private:
	string marks;
	string array[5];
	public:
//       child():marks("/0")
//       {
//       	cout<<"Child Constructor"<<endl;
//	   }
//	   child(string s):marks(s)
//	   {
//	   	cout<<"Child parameterized Constructor"<<endl;
//	   }
	void display()
	{
		base::getname();
		for(int i=0;i<5;i++)
		{
			cout<<"Enter a Subject marks = ";
			getline(cin >> ws , array[i]);
		}
	}
	void putdata()
	{
		base::showdata();
		
		for(int i=0;i<5;i++)
		{
				cout<<"student Marks = "<<array[i]<<endl;
		}
	
	}
};
int main()
{
	child c;
	c.display();
	c.putdata();
}
