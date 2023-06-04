# include <iostream>
using namespace std;
class student{
	private:
		int id;
		int roll_no;
		string name;
		int age;
	public:
		set_student(int id ,int r, string n, int a)
		{
			id=id;
			name=n;
			age=a;
		}
				int get_student()
		{
			cout<<"enter a name =";
			cin>>name;
			cout<<"enter a ID =";
			cin>>id;
			cout<<"enter a age =";
			cin>>age;
		
		}
		int show_student()
		{
		cout<<"name="<<name<<endl;
		cout<<"ID= "<<id<<endl;
		cout<<"age ="<<age<<endl;
		
		}
		
};
int main()
{
	student s1;	
	s1.get_student();
	s1.show_student();
	return 0;
}
