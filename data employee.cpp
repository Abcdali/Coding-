# include <iostream>
using namespace std;
enum etype {
    laborer,
    secratary,
    meneger,
   
};
class employee{
	int num;
	int salary;
	date empdate;
	 etype emptype;
	public:
		employee(){
			num='0';
			salary='0';
		}
	set_employee(int n,int s)
		{
			num=n;
			salary=s;
		}
		
		getemployee()
		{
			int m,d,y,choice;
			cout<<"enter a employee number=";
			cin>>num;
			cout<<"enter a employee salary=";
			cin>>salary;
			cout<<"enter date hire employee=";
			empdate.getdate();
			cout<<"enter employee type=";
			cin>>choice;
			switch(choice)
			{
			case 0:emptype=laborer;	break;
			case 1:emptype=secratary;break;
			case 2:emptype=meneger;	break;
			default:cout<<"invalid choice";
			}
			system("cls");
			
		}
		putemployee() const
		{
			cout<<"employee number="<<num<<endl;
			cout<<"employee salary="<<salary<<endl;
			cout<<"employee date=";
			empdate.showdate();cout<<endl;
			cout<<"employee type=";
			switch(emptype)
			{
			case laborer :
			cout<<"laborer"<<endl;
			break;
			case secratary:
				cout<<"secretary"<<endl;
				break;
				case meneger:cout<<"meneger"<<endl;
				break;
					default:
						cout<<"unkown"<<endl;
						break;
				}	
		}
};
int main()
{
	employee e1,e2,e3;
	cout<<"enter a data for employee 1 = "<<endl;
	e1.getemployee();

	cout<<endl;
	cout<<"enter a data for employee 2 = "<<endl;
	e1.getemployee();

	cout<<endl;
	
	cout<<"enter a data for employee 3 = "<<endl;
	e1.getemployee();
	cout<<endl;
	cout<<"employee 1"<<endl;
	e1.putemployee();
	cout<<endl;
	cout<<"employee 2"<<endl;
		e1.putemployee();
		cout<<endl;
		cout<<"employee 3"<<endl;
		e1.putemployee();
}
