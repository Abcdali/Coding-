# include <iostream>
using namespace std;
class father{
	string name;
	int age;
	public:
		father():name("\0"),age(0)
		{
			cout<<"Father Constructor"<<endl;
		}
		void getdata()
		{
			cout<<"Enter a name = ";
			cin>>name;
			cout<<"Enter a age = ";
			cin>>age;
		}
		void showdata()
		{
			cout<<"Name = "<<name<<endl;
			cout<<"age = "<<age<<endl;
		}
};
class mother: public father{
	char ch;
	public:
		mother():ch(0)
		{
			cout<<"Mother Constructor"<<endl;
		}
		mother(char c):ch(c)
		{
			
		}
		void getdata()
		{
			father::getdata();
			cout<<"Enter a Gender = ";
			cin>>ch;
		}
		void showdata()
		{
			father::showdata();
			cout<<"Gender = "<<ch<<endl;
		}
};
class son:public father,public mother{
	string blood_group;
	public:
		son():blood_group("\0")
		{
			cout<<"Son Constructor"<<endl;
		}
		son(string b):blood_group(b)
		{
			
		}
		void getdata()
		{
			
			mother::getdata();
			cout<<"Enter a Blood Group = ";
			cin>>blood_group;
		}
		void showdata()
		{
		
			mother::showdata();
			cout<<"Blood group = "<<blood_group<<endl;
		}
};
class daughter:public son,public mother,public father{
	int number;
	public:
		daughter():number(0)
		{
			
			cout<<"Daughter Constructor"<<endl;
		}
		void getdata()
		{
			son::getdata();
			cout<<" Enter a number of D/S = ";
			cin>>number;
		}
		void showdata()
		{
			son::showdata();
			cout<<"number of D/S ="<<number<<endl;
		}
};
int main()
{
//	daughter d;
//	d.getdata();
//	d.showdata();

}

