# include <iostream>
using namespace std;
class part{
	private:
	int modelnumber;
	int partnumber;
	float cost;
	public:
		int setpart(int mn, int pn, int c)
		{
			modelnumber=mn;
			partnumber=pn;
			cost=c;
		}
		int showpart()
		{
			cout<<"model 1="<<modelnumber;
			cout<<"part="<<partnumber;
			cout<<"cost $ ="<<cost<<endl;
		}
};
int main()
{
	part part1;
	part1.setpart(234,45,78.567);
	return 0;
}
