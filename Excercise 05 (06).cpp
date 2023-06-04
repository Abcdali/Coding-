# include <iostream>
using namespace std;
class date{
	int day;
	int month;
	int year;
	public:
		set_date(int d,int m ,int y ){
			day=d;
			month=m;
			year=y;
		}
		int getdate()
		{
			cout<<"enter a day,month,year=";
			cin>>day>>month>>year;
			
			
		}
	int	showdate() const
		{
			cout<<day<<"/"<<month<<"/"<<year<<endl;
		}
		
};
int main()
{
	date d;
	d.getdate();
	d.showdate();}
