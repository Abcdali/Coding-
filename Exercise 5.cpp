# include <iostream>
using namespace std;
class time{
	int hours;
	int minutes;
	int seconds;
	public:
		time():hours(0),minutes(0),seconds(0)
		{
			
		}
		time(int h,int m,int s):hours(h),minutes(m),seconds(s)
		{
			cout<<"Parameterized Constructor"<<endl;	
		}
		time operator ++(int )
		{
			int hr=hours+hours;
			int mn=minutes+minutes;
			int  sc=seconds+seconds;
			return time(hr,mn,sc);
		}
		time operator --(int)
		{
			int hr=hours+hours;
			int mn=minutes+minutes;
			int  sc=seconds+seconds;
			return time(hr,mn,sc);
		}
			time operator ++()
		{
			
			int hr=hours+hours;
			int mn=minutes+minutes;
			int  sc=seconds+seconds;
			return time(hr,mn,sc);
		}
		
		void showdata()
		{
			cout<<hours<<":"<<minutes<<":"<<seconds<<endl;
		}
		
};
int main()
{
	time t1(12,23,11);
	t1++;
	t1.showdata();
	time t2(2,3,4);
	t2--;
	t2.showdata();
}
