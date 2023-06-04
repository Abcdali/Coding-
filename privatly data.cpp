# include <iostream>
using namespace std;
class A{
	private:
		int  a1;
		protected:
			int  a2;
			public:
				int a3;
				
};
class B: public A{
	public:
		void fun()
		{
		cout<<"function 1"<<endl;
		}
	
};
class c : private A{
	public:
		void fun1()
		{
	A::fun();	
		}
};
int main()
{
int a;
	
	 
//	 B b1;
//	 b1.fun();
	 c c1;
	 c1.fun();

}
