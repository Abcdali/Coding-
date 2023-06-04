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
		time(int h,int m,int s)
		{
			hours=h;
			minutes=m;
			seconds=s;
		}
		 showtime() const
		{
			cout<<hours<<":"<<minutes<<":"<<seconds<<endl;
		}
		 time operator+(time t2){
		 int s;
		 s=seconds+t2.seconds;
		 int m;
		 m=minutes+t2.minutes;
		 int h=hours+t2.hours;
		 if(s>59)
		 {
		 	s=60;
		 	m++;
		 }
		 if(m>59)
		 {
		 	m=60;
		 	h++;
		 }
		 return time(h,m,s);
		 }
		
		
};
int main()
{
	time t1(2,34,12);
 time t2(2,6,8);
	t1.showtime();
	t2.showtime();
	time t3;
t3=t1+t2;
	t3.showtime();
	
}
