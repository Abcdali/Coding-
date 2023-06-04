# include <iostream>
using namespace std;
//class phone {
//	int code;
//	int number;
//	public:
//		phone(int,int);
//		int getdata()
//		{
//		cout<<"enter a code=";
//		cin>>code;
//		cout<<"enter a number=";
//		cin>>number;
//			
//		}
//	int showdata()
//	{
//		cout<<"code="<<code<<endl;
//		cout<<"number="<<number<<endl;
//		
//	}
//};
//int main()
//
//{
//	phone p;
//	p.getdata();
//	p.showdata();
//	return 0;
//}

class date{
	int day;
	int month;
	int year;
	
//	string name;
//	string date;
//	int sap;
//	int phone;
	public:
//	   setdate(int ,int ,int )
	date();
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

