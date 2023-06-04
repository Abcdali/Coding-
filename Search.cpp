# include <iostream>
using namespace std;
int main()
{
	int n;
	int loc=-1;
	int arr[5];
	for(int i=0;i<5;i++)
	{
		cout<<"Enter a number = ";
		cin>>arr[i];
	}
	cout<<"Enter a Searching number = ";
	cin>>n;
	for(int j=0;j<5;j++)
	{
		
	
	if(n==arr[j])
	{
		loc=j;
		cout<<"number are found at = "<<loc<<endl;
		exit;
	}
}
	if(loc==-1)
	{
		cout<<"Sorry number are not found"<<endl;
	}

 return 0;
}
