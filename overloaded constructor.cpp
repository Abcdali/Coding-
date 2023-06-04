# include <iostream>
using namespace std;
class number{
	string name;
	string subject ;
	public:
		number()
		{
			name="ahmad";
			subject="null";
		}

  number(string,string);

  int get_data()
  {
  	cout<<"NAME = "<<name<<endl;
  	cout<<"SUBJECTS = "<<subject<<endl;
  }
};
number::number(string n,string s)
{
	name=n;
    subject=s;
}
int main()
{
	number n1("ali","math"),n2;
	n1.get_data();
	n2.get_data();

	return 0;
}
