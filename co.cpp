# include<iostream>
using namespace std;
class number{
	int count;
	public:
		number():count()
		{
			
		}
		number(int c):count(c)
		{
			cout<<"Parameterized constrcutor"<<endl;
		}
//	number operator++()
//		{
//			++count;
//			number temp;
//           	temp.count=count;
//           	return temp;
//		    
//		}
  number operator-(number c2)
  {
  	int temp=count-c2.count;
  	return number(temp);
  }
  bool operator>=(number c2)
  {
  	int temp=count>=c2.count;
  	return bool(temp);
  }
		void showdata()
		{
			cout<<"number = "<<count<<endl;  
		}
};
int main()
{
	number c1(4),c2(4),result;
       result=c1>=c2;
       result=c1-c2;
	result.showdata();
	if(c1>=c2)
	{
		cout<<"C1 greater than or equal to C2"<<endl;
	}
	else
	{
		cout<<"C1 smaller than or equal to  C2"<<endl;
	}
	
}
