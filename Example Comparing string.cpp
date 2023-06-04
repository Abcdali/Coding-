# include <iostream>
using namespace std;
# include <string.h>
class string{
	private:
		enum{size=80
		};
		char str[size];
		public:
			string()
			{
				cout<<"Constructor"<<endl;
			}
			string(char s)
			{
				str[size]=s;
			}
			display()
			{
				cout<<str;
			}
			void getstring()
			{
				cin.get(str,size);
			}
     bool operator==(string ss) const
	 {
	 	return (strcmp(str,ss.str)==0) ? true : false;
		 }	
};
int main()
{
	string s1("yes"),s2("no"),s3;
	cout<<"Enter a yes or no =";
	s3.getstr();
	if(s2==s1)
	{
		cout<<"you type yes"<<endl;
	}
	else if(s2==s3)
	{
		cout<<"you type no"<<endl;
	}
	else
	{
		cout<<"invalid choice"<<endl;
	}
	return 0;
	
}
