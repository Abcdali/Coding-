# include <iostream>
using namespace std;
class foo{
	private:
	static int count;
//		 int count;
		public:
//		foo():count(2)
//		{
//			cout<<"Constructor"<<endl;
//		}
	getfoo()
	{
		count++;
	}
  int getcount()
	{
		return count;
	}
};
int foo::count=0;
int main()
{
	foo c1,c2,c3;
	cout<<"count = "<<c1.getcount()<<endl;;
	cout<<"count = "<<c2.getcount()<<endl;
    cout<<"count = "<<c3.getcount()<<endl;
	
}
