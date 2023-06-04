# include <iostream>
using namespace std;
class Int{
	private:
		int count;
		public:
			Int():count(0)
			{
				
			}
			Int(int c):count(c)
			{
				cout<<"Parameterized Constructor "<<endl;
			}
			Int operator+(Int n2)
			{
				int temp=count+n2.count;
				return Int(temp);
			}
			Int operator *(Int n2)
			{
				int temp=count*n2.count;
				return Int(temp);
			}
			Int operator -(Int n2)
			{
					int temp=count-	n2.count;
				return Int(temp);
			}
				Int operator /(Int n2)
			{
					int temp=count/n2.count;
				return Int(temp);
			}
			
			void showdata()
			{
				cout<<"Int number = "<<count<<endl;
			}
			
};
int main()
{
Int n1(2),n2(8),n3;
    cout<<"Sum "<<endl;
	n3=n1+n2;
	n3.showdata();
	cout<<"Multiply "<<endl;
	n3=n1*n2;
	n3.showdata();
	cout<<"Subtraction "<<endl;
	n3=n1-n2;
	n3.showdata();
	cout<<"Divide "<<endl;
	n3=n2/n1;
	n3.showdata();
}
