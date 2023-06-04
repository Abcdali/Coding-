# include <iostream>
using namespace std;
class pizza{
	private:
	 int price;
	string size;
	public:
		pizza():price(0),size("\0")
		{
			
		}
	pizza(int p,string s):price(p),size(s)
	{
		
	}
	void get_data()
	{
		cout<<"enter a price = ";
		cin>>price;
		cout<<"enter a size = ";
		cin>>size;
		
	}
	void showdata()
	{
		cout<<"price = "<<price<<endl;
		cout<<"size = "<<size<<endl;
	}
};
class sale : public pizza
{
	string flavour;
	public:
		sale():flavour("\0")
		{
			
		}
		sale(string f)
		{
		flavour=f;
		}
	void get_data()
	{
		pizza::get_data();
		cout<<"enter a flavour = ";
		cin>>flavour; 
	}
	void showdata()
	{
		pizza::showdata();
		cout<<"flavour = "<<flavour<<endl;
	}
	
};
int main()
{
	sale f;
	f.get_data();
	f.showdata();
}
