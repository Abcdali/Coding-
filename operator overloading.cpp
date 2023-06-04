# include <iostream>
using namespace std;
class counter{
	private:
		int count;
		public:
//			void operator++(){
//				count++;
//			}
           counter operator++(int)
           {
           count++;
           	counter temp;
           	temp.count=count;
           	return temp;
		   }
			void showdata()
			{
				cout<<count<<endl;
			}
};
int main()
{
	counter c1;
	c1++;
	c1.showdata();
	counter c2;
	c2=c1++;
	c2.showdata();
	counter c3;
	c3=c2++;
	c3.showdata();
}
