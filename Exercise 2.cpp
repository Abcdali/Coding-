# include <iostream>
using namespace std;
class number{
	private:
		int count;
		public:
			number():count(0){
				
			}
			number(int c):count(c)
			{
				
			}
		   number operator+=(number s2)
		   {
		   	int temp=count+s2.count;
		   	return number(temp);
		   }
		   void showdata()
		   {
		   	cout<<"number s3 = "<<count<<endl;
		   }
};
int main()
{
	number s1(2),s2(5),s3;
	s3=s1+=s2;
	s3.showdata();

	
}
