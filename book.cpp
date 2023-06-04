# include <iostream>
using namespace std;
class date{
	int m,d,y;
	public:
		date():m(0),d(0),y(0)
		{
			
		}
	void getdata()
	{
		cout<<"Enter a day,month,year = ";
		cin>>d>>m>>y;
	}
	void showdata()
	{
		cout<<"Date = "<<d<<"/"<<m<<"/"<<y<<endl;
	}
};
class publication:public date{
	string tittle;
	float price;
	public:
		publication():tittle("\0"),price(0)
		{
			
		}
		publication(string t,float p)
		{
			tittle=t;
			p=price;
		}
	void getdata()
	{
		cout<<"Enter a tittle = ";
		cin>>tittle;
		cout<<"Enter a price  = ";
		cin>>price;
		date::getdata();
	}
	void showdata()
	{
		cout<<"Tittle = "<<tittle<<endl;
		cout<<"price  = "<<price<<endl;
		date::showdata();
	}
	};
//	enum{
//		CD,DVD;
//	};
class disk:public publication{
	char p;
	public:
		disk():p(0)
		{
			
		}
		void getdata()
		{
			publication::getdata();
			cout<<"press c for CD"<<endl;
			cout<<"press d for DVD"<<endl;
			cout<<"Enter a data store in = ";
			cin>>p;
			switch(p)
			{
				case'c':
					cout<<"CD"<<endl;
				break;
				case'd':
					cout<<"DVD"<<endl;
				break;
			}
		}
		void showdata()
		{   publication::showdata();
			cout<<"Data store is = "<<p<<endl;
		
		}
}; 
class book:public publication,public disk{
	int count;
	public:
		book():count(0)
		{
			
		}
	book(int c):count(c)
	{
}
void getdata()
{
       disk::getdata();
		cout<<"Enter a pages of book = ";
		cin>>count;
	}
	void showdata()
	{  disk::showdata();
		cout<<"pages = "<<count<<endl;
	}
};
class tape :public disk, public publication,public book {
	int min;
	public:
		tape():min()
		{
			
		}
		tape(int m):min(m)
		{
			
		}
	void getdata()
	{
		book::getdata();
		cout<<"Enter a time = ";
		cin>>min;
		
	}
	void showdata()
	{   book::showdata();
		cout<<"time = "<<min<<endl;
	}
		};
int main()
{
	tape t;
	t.getdata();
	t.showdata();
}
