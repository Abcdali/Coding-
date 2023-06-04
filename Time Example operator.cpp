# include <iostream>
using namespace std;
class time12{
	private:
		bool pm
		int hrs;
		int mnts;
		
		public:
			time12():hrs(0),mnts(0),pm(true)
			{
				
			}
			time12(int h,int m,bool ap )
			{
				hrs=h;
				mnts=m;
				pm=ap;
			}
			void display()
			{
				cout<<hrs<<":";
				if(mnts<10)
				
					cout<<'0';
					cout<<mnts<<"";
					string am_pm = pm ? "p.m." : "a.m.";
                     cout << am_pm;
                 }
				
};
class time24{
	private:
		int hours;
		int minutes;
		int seconds;
		public:
			time24():hours(0),minutes(0),seconds(0)
			{
				
			}
			time24(int h,int m,int s)
			{
				hours=h;
				minutes=m;
				seconds=s;
			}
			void display()
           
           {
           	if(hours<10)  cout<<'0';
           	cout<<hours<<":";
           	 if(minutes<10)  cout<<'0';
		   cout<<minutes<<":";
			if(seconds<10)   cout<<'0';
			cout<<seconds;
		   }
};
time24::operator time12()const
{
	int hrs24=hours;
	bool pm=nours<12 ? true : false;
	int r_mind=seconds<30 ? true : false;
	int r_Mins = seconds < 30 ? minutes : minutes+1;
if(r_Mins == 60) //carry mins?
{
r_Mins=0;
++hrs24;
if(hrs24 == 12 || hrs24 == 24) //carry hrs?
pm = (pm==true) ? false : true; //toggle am/pm
}
int hrs12 = (hrs24 < 13) ? hrs24 : hrs24-12;
if(hrs12==0) //00 is 12 a.m.
{ hrs12=12; pm=false; }
return time12(pm, hrs12, roundMins);
}
////////////////////////////////////////////////////////////////
int main()
{
int h, m, s;
while(true)
{ //get 24-hr time from user
cout << "Enter 24-hour time: \n";
cout << " Hours (0 to 23): ; cin >> h;
if(h > 23) //quit if hours > 23
return(1);
cout << “ Minutes: “; cin >> m;
cout << “ Seconds: “; cin >> s;
time24 t24(h, m, s); //make a time24
cout << “You entered: “; //display the time24
t24.display();
time12 t12 = t24; //convert time24 to time12
cout << “\n12-hour time: “; //display equivalent time12
t12.display();
cout << “\n\n”;
}
return 0;
}
}
