# include <iostream>
using namespace std;
class publication{
	private:
		string tittle;
		float price;
		public:
		publication():tittle("\0"),price(0)
		{
			
		}
	  publication(string t ,float p):tittle(t),price(p)
	  {
	  	
	  }
	  void get_data()
	  {
	  	cout<<"enter a tittle = ";
		  cin>>tittle;
		 cout<<"enter a price = ";
		 cin>>price; 
	  }
	  void putdata()
	  {
	  	cout<<"Tittle = "<<tittle<<endl;
	  	cout<<"Price = "<<price<<endl;
	  }
};
class sales: public publication{
	private:
		enum {month=3};
	float salesarr[month];
	public:
	void get_data()
	{   
	publication::get_data();
		cout<<"enter a month =";
		for(int i=0;i<3;i++)
		{
			salesarr[i]=0.0;
			
		}
	}
	void setsales(float s1,float s2,float s3)
	{
		salesarr[0]=s1;
		salesarr[1]=s2;
		salesarr[2]=s3;
	}
	
	void putdata()
	{ publication::putdata();
	for (int i = 0; i < 3; ++i) {
        cout << "Month " << i+1 << ": $" << salesarr[i] <<endl;
        }
	}
};
class book:  public sales{
	private:
		int page_count;
		public:
			book():page_count(0)
			{
				
			}
	    book(int pc):page_count(pc)
	    {
	    	
		}
	void get_data()
	{ publication::get_data();
		cout<<"Enter a book page count = ";
		cin>>page_count;
		sales::get_data();
	}
	void putdata()
	{ publication::putdata();
		cout<<"book page count = "<<page_count<<endl;
		sales::putdata();
	}
};
class tape :   public sales{
	private:
		float time;
		public:
		tape():time(0)
		{
			
		}
		tape(float t):time(t)
		{
			
		}
		void get_data()
		{ publication::get_data();
			cout<<"Enter a time = ";
			cin>>time;
			sales::get_data();
			
		}
		void putdata()
		{  publication::putdata();
			cout<<"Time = "<<time<<endl;
			sales::putdata();
			cout<<endl;
		}
};
int main()
{
	tape t;
	book b;
	b.get_data();
	t.get_data();
	b.putdata();
	t.putdata();
	
}
