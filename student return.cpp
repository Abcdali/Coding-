# include <iostream>
using namespace std;
class student{
	
 private:
	int age;
	int section;
	public:
		string name;
		int id;
		int setdata(int a,int s)
		{
			age=a;
		   
			section=s;
			
		}
		int getdata()
		{
			cout<<"NAME = "<<name<<endl;
			cout<<"AGE = "<<age<<endl;
			cout<<"ID = "<<id<<endl;
			cout<<"SECTION = "<<section<<endl;
		}
};
int main()
{
	student s;
	s.name="ali";
	s.id=48067;
	s.setdata(18,2);
	s.getdata();
	return 0;
}
