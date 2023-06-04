# include <iostream>
using namespace std;
class time{
	int min,sec,hr;
	public:
		time():min(0),sec(0),hr(0)
		{
			
		}
		time(int m,int s,int h):min(m),sec(s),hr(h)
		{
			cout<<"parameterized constructor"<<endl;
		}
		void showdata()
		{
			cout<<min<<":"<<sec<<":"<<hr<<endl;
		}
		void normalize()
		{
			
		  min = min + sec / 60;
        sec = sec% 60;
        hr = hr + min / 60;
        min = min % 60;	
		}
		time operator+(time t)
		{
			
		time temp;
			temp.sec=sec+t.sec;
			temp.min=min+t.min;
			temp.hr=hr+t.hr;
			temp.normalize();
			return time(temp);
			
		}
};
int main()
{
	time t1(12,34,130),t2(02,50,120),t3;
	t3=t1+t2;
	t1.showdata();
	t2.showdata();
	t3.showdata();
	
}
