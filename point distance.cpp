# include <iostream>
using namespace std;
class point{
	int a;
	int b;
	public:
		point(int ,int );
	
		int get_data()
		{
			cout<<"distance="<<a<<","<<b<<endl;
			
		}
	
};
point::point(int x,int y)
	{
			a=x;
			b=y;
			
		}
int main()
{
	point p1(1,2);
	p1.get_data();
    point p2(2,3);
    p2.get_data();
    return 0;
}
