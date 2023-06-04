# include <iostream>
using namespace std;
class date{
	int day;
	int month;
	int year;
	public:
	   setdate(int d ,int m,int y)
	  {
		    	day=d;
	month=m;
	year=y;
        }

			int getdata()
		{
	cout<<"enter a day="<<endl;
	cin>>day;
	cout<<"enter a month="<<endl;
	cin>>month;
	cout<<"enter a year="<<endl;
	cin>>year;
}
	int showdata()
	{
		cout<<"date="<<day<<endl;
		cout<<"month="<<month<<endl;
		cout<<"year="<<year<<endl;
	}
};
int main()
{
	date d1;
	d1.getdata();
     d1.showdata();
     return 0;
}

