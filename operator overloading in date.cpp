# include <iostream>
using namespace std;
class date{
	int day;
	int month;
	int year;
	public:
		date():day(),month(),year()
		{
			
		}
	   date(int d,int m,int y)
		{
			day=d;
			month=m;
			year=y;
			cout<<"pararmeterized Constructor"<<endl;
		
		}
		void showdata()
		{
			cout<<day<<"/"<<month<<"/"<<year<<endl;
		}
		void normalize()
		{
			day=day>24;
			day++;
			month=month>30;
			month++;
			year=year>12;
			year++;
		}
		date operator+(date d2)
		{
			date temp;
			temp.day=day+d2.day;
			temp.month=month+d2.month;
			temp.year=year+d2.year;
			temp.normalize();
			return date(temp);
		}
		
};
int main()
{
	date d1(4,2,3000),d2(4,3,2023),d3;
	d3=d1+d2;
      d1.showdata();
      d2.showdata();
	d3.showdata();
}
