# include <iostream>
using namespace std;
class number{
	int count;
//	static int count;
	public:
		number():count(4)
		{
			
		}
	 getnumber()
		{
			count++;
					}
 int getdata()
	{
		return count;
	}
};
//int number::count;
int main()
{
	number n1,n2,n3,n4,n5;
	cout<<"COUNT="<<n1.getdata()<<endl;
	cout<<"COUNT="<<n2.getdata()<<endl;
	cout<<"COUNT="<<n3.getdata()<<endl;
	cout<<"COUNT="<<n4.getdata()<<endl;
	cout<<"COUNT="<<n5.getdata()<<endl;
//	cout<<"COUNT="<<n1.getdata()<<endl;
}
