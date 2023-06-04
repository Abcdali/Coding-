# include <iostream>
using namespace std;
class teacher{
	private:
	
		int age;
		int salary;
		
	
		public:
			string name;
			string subject;
			int id;
			int setdata(int a,int s)
			{
				
				age=a;
			
			   id=id;
				salary=s;
			}
	int getdata()
	{
	cout<<"NAME = "<<name<<endl;
	cout<<"SUBJECTS = "<<subject<<endl;
		cout<<"AGE = "<<age<<endl;
		cout<<"SALARY = "<<salary<<endl;
			cout<<"ID = "<<id<<endl;
	}
};
int main()
{
	teacher t1;
	t1.name="HAMZA";
	t1.subject="MATHS";
	t1.id=48067;
	t1.setdata(22,50000);
	t1.getdata();
	return 0;
}
