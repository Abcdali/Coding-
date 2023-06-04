# include <iostream>
using namespace std;
class person{
	string name;
	public:
		void getdata()
		{
			cout<<"enter  name = ";
			cin>>name;
			
		}
		void showdata()
		{
			cout<<"name = "<<name<<endl;
		}
		
};
int main()
{
	person *ptr[100];
	int n=0;
	char choice;
	do
	{
	ptr[n]=new person;
	ptr[n]->getdata();
	n++;
	cout<<"enter another = ";
	cin>>choice;
	
	}
	while(choice=='y');
	{
		for(int j=0;j<n;j++)
		{
			cout<<"name = "<<j+1<<endl;
			ptr[j]->showdata();
		}
	}
	
}
