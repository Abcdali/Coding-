 # include <iostream>
 using namespace std;
 class employee{
 	int num;
 	
 	int compensasion;
 	public:
 		setdata(int n,int c)
 		{
 			num=n;
 			compensasion=c;
		 }
		 
		 
		 
		 
		 getdata()
		 {
		 	cout<<"enter a number=";
		 	cin>>num;
	        cout<<"enter a compensasion=";
	        cin>>compensasion;
	        system("cls");
		 }
           
	showdata()
	{
		cout<<" employee number="<<num<<endl;
		cout<<" employee compensasion="<<compensasion<<endl;
		
	}
 };
 int main()
 {
 	employee e1;
 	e1.getdata();
 	employee e2;
 	e2.getdata();
 	employee e3;
 	e3.getdata();
 	cout<<endl;
 	e1.showdata();
 	e2.showdata();
 	e3.showdata();
 	
 	
 }
 

