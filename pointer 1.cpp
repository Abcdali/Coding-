# include <iostream>
using namespace std;
class complex{
	int n1,n2;
	public:
		void get_data()
		{
			cout<<"value of n1 = "<<n1<<endl;
			cout<<"value of n2 = "<<n2<<endl;
		}
		void setdata(int a,int b)
		{
			n1=a;
			n2=b;
		}
};
int main()
{
complex c;
complex *ptr=&c;
complex *ptr1=new complex;
ptr->setdata(1,3);
ptr->get_data();
(*ptr1).setdata(1,45);
(*ptr1).get_data();

}
//class distance1{
//	int feet;
//	float inches;
//	public:
//		distance1():feet(0),inches(0)
//		{
//			
//		}
//		void get_dist()
//		{
//			cout<<"Enter a feet = ";
//			cin>>feet;
//			cout<<"Enter a inches = ";
//			cin>>inches;
//			
//		}
//		void showdist()
//		{
//			cout<<feet<<"/"<<inches<<endl;
//		}
//		
//
//};
//int main()
//{
//distance1 dist;
////dist.get_dist();
////dist.showdist();
////distance1 *ptr=new distance1;
////ptr ->get_dist();
////ptr->showdist();
//distance1 *ptr=&dist;
//(*ptr).get_dist();
//(*ptr).showdist();
//}

