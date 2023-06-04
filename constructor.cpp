# include <iostream>
using namespace std;
 
class student{
	private:
		string name;
		int rollno;
	public:
	 student(void);
	 student get_data()
	 
	 {
	 	
	   cout<<"constructor"<<endl;
	   cout<<"name="<<name<<endl;
	   cout<<"rollno="<<rollno;
	 }
};
student::student(void)
{
	name="ali";
	rollno=0;
}
int main()
{
	student s1;
	s1.get_data();
	student s2;
    s2.get_data();
   	student s3;
    s3.get_data();
	return 0;
}
