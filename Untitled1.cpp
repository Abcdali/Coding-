# include <iostream>
# include <iomanip>
using namespace std;
int half=0,full=0,amount=0,total_item=0,am=0,beef=0,meat=0,chicken=0,malai=0,seekh=0,chapli=0,kabab=0,kala=0,fish=0,gril=0,hal=0,ful=0,h=0,f=0,sn;
        
void showdata()
			{
			
			    cout<< setw(30)<<" | Baryani | "<<endl;
				cout<<"Chicken Baryani Half Plate = "<<half<<endl;
				cout<<"Chicken Baryani Full plate = "<<full<<endl;
				cout<<"Saada Baryani Half Plate = "<<hal<<endl;
				cout<<"Saada Baryani Full Plate = "<<ful<<endl;
				cout<<"Karachi Naseeb Baryani half plate = "<<h<<endl;
	           	cout<<"Karachi Naseeb Baryani Full plate = "<<f<<endl;
	           	cout<<endl<<endl;
	           	cout<<setw(30)<<"  |  Tikka | "<<endl;
	           	cout<<" Beef Tikka Boti = "<<beef<<endl;
				cout<<" Chicken Tikka boti = "<<chicken<<endl;
				cout<<" Malai Tikka boti =  "<<malai<<endl;
				cout<<" meat Boti  = "<<meat<<endl;
				cout<<endl<<endl;
				cout<<setw(30)<<"  | Kabab | "<<endl;
				cout<<" Chicken Seekh kabab = "<<seekh<<endl;
				cout<<" chapli Kabab = "<<chapli<<endl;
				cout<<" Beef seekh kabab = "<<kabab<<endl;
			    cout<<endl<<endl;
				cout<<setw(30)<<" | Fish | "<<endl;
				cout<<" Gril Fish = "<<gril<<endl;
				cout<<" Fish = "<<fish<<endl;
				cout<<" Kala Rohu = "<<kala<<endl;	
				}
void printdata()
{
	cout<<setw(30)<<" | Total Bill | "<<endl;
	cout<<endl<<endl;
	cout<<"Total Items = "<<total_item<<endl;
	cout<<"Total bill = "<<amount<<endl;
}
		
				
class name{
	public:
            void putdata()
            {
            	    cout<<endl;
            		cout<<setw(70)<<" | RESTURANT MANAGEMENT SYSTEM |"<<endl;
            		cout<<endl;
           	cout<<setw(70)<<" Address : 15 SMA Hai Rd, Block Q "<<endl;
		    cout<<setw(80)<<" Block Q Flats Model Town, Lahore, Punjab 54000"<<endl;
		    cout<<endl<<endl;
		    	 cout<<setw(70)<<" | Welcome to Chaska Restaurant Lahore |"<<endl;
		    	 
			}
			virtual void display()=0;
};
class menu : public name{
	     int choice;
	     int z;
	        char ch,p,chi,cho,choic;
	        public:
	        	void display()
	        	{
	        		name::putdata();
	        	while(true)
	        	{
	        		
				
	        		cout<<"***********************"<<endl;
	        		cout<<"press 1 : Online Order "<<endl;
	        		cout<<"press 2 : Physical Order "<<endl;
	        		cout<<"Press 3 : Check Order "<<endl;
	        		cout<<"Press 4 : Total Bill "<<endl;
	        		cout<<"**********************"<<endl;
	        		cout<<"Enter a Choice = ";
	        		cin>>choice;
	               	
	       
	        		if(choice==1)
	        		{ 
	        		    
	        		
	        		   	cout<<setw(30)<<" | MENU | "<<endl;
	        			cout<<"******************"<<endl;
	        			cout<<"press 1 : Baryani "<<endl;
	        			cout<<"press 2 : Tikka "<<endl;
	        			cout<<"press 3 : kabab"<<endl;
	        			cout<<"press 4 : Fish"<<endl;
	        			cout<<"****************"<<endl;
	        		    cout<<"Enter a choice = ";
						cin>>ch;
						switch(ch)
						{
						 case'1':
						 	cout<<"*****************************"<<endl;
						 	cout<<"press 1 : Chicken Baryani "<<endl;
						 	cout<<"Press 2 : Sada Baryani "<<endl;
						 	cout<<"Press 3 : Karachi Naseeb Baryani "<<endl;
						 	cout<<"*****************************"<<endl;
						 	
						 	cout<<"Enter a Choice = ";
						 	cin>>p;
						 	switch(p)
						 	{
						 	case'1':
						 		
						 		
						 		cout<<"Chicken Baryani Half/Full =100/200 "<<endl;
						 		cout<<"*****************************"<<endl;
						 		cout<<"Press 1 : Half Plate"<<endl;
						 		cout<<"Press 2 : Full Plate"<<endl;
						 		cout<<"*****************************"<<endl;
						 		cout<<"Enter a Half / Full Plate Choice = ";
						 		cin>>z;
						 	    if(z==1)
						 		{
						 			amount=amount+100;
						 			cout<<"Half plate = 100/-"<<endl;
						 			sn=sn+1;
						 			half++;
						 			total_item++;
								 }
								 else if(z==2) 
								 {
								 	am=amount+200;
								 	cout<<"Full plate = 200/-"<<endl;
								 	sn=sn+1;
								 	full++;
								 	total_item++;
								 }
								 else
								 {
								 	cout<<"Wrong choice"<<endl;
								 }
						 	break;
							case'2':
								cout<<"sada Baryani Half/Full =70/150 "<<endl;
						 		cout<<"*****************************"<<endl;
						 		cout<<"Press 1 : Half Plate"<<endl;
						 		cout<<"Press 2 : Full Plate"<<endl;
						 		cout<<"*****************************"<<endl;
						 		cout<<"Enter a Half / Full Plate Choice = ";
						 		cin>>z;
						 	    if(z==1)
						 		{
						 			amount=amount+70;
						 			cout<<"Half plate = 70/- "<<endl;
						 			hal++;
						 			total_item++;
								 }
								 else if(z==2) 
								 {
								 	am=amount+150;
								 	cout<<"Full plate = 150/- "<<endl;
								 	ful++;
								 	total_item++;
								 }
								 else
								 {
								 	cout<<"Wrong choice"<<endl;
								 }
							   break; 
							   case'3':
							   		cout<<"Karachi Naseeb  Baryani Half/Full =150/250 "<<endl;
						 		cout<<"*****************************"<<endl;
						 		cout<<"Press 1 : Half Plate"<<endl;
						 		cout<<"Press 2 : Full Plate"<<endl;
						 		cout<<"*****************************"<<endl;
						 		cout<<"Enter a Half / Full Plate Choice = ";
						 		cin>>z;
						 	    if(z==1)
						 		{
						 			amount=amount+150;
						 			cout<<"Half plate = 150/-"<<endl;
						 			h++;
						 			total_item++;
								 }
								 else if(z==2) 
								 {
								 	am=amount+150;
								 	cout<<"Full plate = 250/-"<<endl;
								 	f++;
								 	total_item++;
								 }
								 else
								 {
								 	cout<<"Wrong choice"<<endl;
								 }
							   break;
							   default:
							   cout<<"Wrong choice "<<endl;
							   break; 
							   	
							 }
							 break;
						case'2':
							cout<<"*****************************"<<endl;
							cout<<"Press 1 : Beef Tikka Boti"<<endl;
							cout<<"press 2 : Chicken Tikka boti"<<endl;
							cout<<"press 3 : Malai Tikka boti "<<endl;
							cout<<"Press 4 : meat Boti "<<endl;
							cout<<"*****************************"<<endl;
							cout<<"Enter a Choice For Tikka  = ";
							cin>>chi;
							switch(chi)
							{
								case'1':
									amount=amount+70;
									cout<<"Beef Tikka Boti = 70/-"<<endl;
									total_item++;
									beef++;
									break;
								case'2':
									
									amount=amount+100;
									cout<<"Chicken Tikka boti = 100/-"<<endl;
									total_item++;
									chicken++;
									break;
								case'3':
									amount=amount+150;
									cout<<"Malai Tikka Boti = 150/- "<<endl;
									total_item++;
									malai++;
									break;
								case'4':
									amount=amount+120;
									cout<<"Meat Tikka Boti = 120/- "<<endl;
									total_item++;
									meat++;
									break;
									default:
										cout<<"Wrong choice "<<endl;
										break;
							}
							break;
						case'3':
							cout<<"*****************************"<<endl;
							cout<<"Press 1 : Chicken Seekh kabab "<<endl;
							cout<<"Press 2 : chapli Kabab"<<endl;
							cout<<"Press 3 : Beef seekh kabab"<<endl;
							cout<<"*****************************"<<endl;
							cout<<"Enter a Choice for Kabab = ";
							cin>>cho;
							switch(cho)
							{
								case'1':
									amount=amount+70;
									cout<<"Chicken Seekh kabab = 70/-"<<endl;
									total_item++;
									seekh++;
									break;
								case'2':
									amount=amount+80;
									cout<<"capli Kabab = 80/- "<<endl;
									total_item++;
									chapli++;
									break;
								case'3':
									amount=amount+100;
									cout<<"Beef Seekh kabab = 100/- "<<endl;
									total_item++;
									kabab++;
									break;
									default:
									cout<<"Wrong chocie "<<endl;
									break;		
							}
							break;
							
						case'4':
							cout<<"*****************************"<<endl;
							cout<<"Press 1 : Gril Fish "<<endl;
							cout<<"Press 2 : Fish"<<endl;
							cout<<"Press 3 : Kala Rohu"<<endl;
							cout<<"*****************************"<<endl;
							cout<<"Enter a choice for fish = ";
							cin>>choic;
							switch(choic)
							{
								case'1':
									amount=amount+400;
									cout<<"Gril Fish = 400/-"<<endl;
									total_item++;
									gril++;
									break;
									case'2':
										amount=amount+250;
										cout<<"Fish = 250/-"<<endl;
										total_item++;
										fish++;
										break;
									case'3':
										amount=amount+700;
										cout<<"Kala Rohu = 700/-"<<endl;
										total_item++;
										kala++;
										break;
									default:
										cout<<"Wrong Choice "<<endl;
								break;									
							}
							
							break;
								default:
								cout<<"Invalid Choice"<<endl;
								break;
														
							}
						
								
	        			
	        			
					}
				  	else if(choice==2)
					{
						 
						cout<<setw(30)<<"  | MENU | "<<endl;
						cout<<"******************"<<endl;
	        			cout<<"press 1 : Baryani "<<endl;
	        			cout<<"press 2: Tikka "<<endl;
	        			cout<<"press 3 : kabbab"<<endl;
	        			cout<<"Press 4 : Fish"<<endl;
	        			cout<<"***************"<<endl;
	        			cout<<"Enter a choice = ";
						cin>>ch;
						switch(ch)
						{
						 case'1':
						 	cout<<"*****************************"<<endl;
						 	cout<<"press 1 : Chicken Baryani "<<endl;
						 	cout<<"Press 2 : Sada Baryani "<<endl;
						 	cout<<"Press 3 : Karachi Naseeb Baryani "<<endl;
						 	cout<<"*****************************"<<endl;
						 	
						 	cout<<"Enter a Choice = ";
						 	cin>>p;
						 	switch(p)
						 	{
						 	case'1':
						 		
						 		
						 		cout<<"Chicken Baryani Half/Full =100/200 "<<endl;
						 		cout<<"*****************************"<<endl;
						 		cout<<"Press 1 : Half Plate"<<endl;
						 		cout<<"Press 2 : Full Plate"<<endl;
						 		cout<<"*****************************"<<endl;
						 		cout<<"Enter a Half / Full Plate Choice = ";
						 		cin>>z;
						 	    if(z==1)
						 		{
						 			amount=amount+100;
						 			cout<<"Half plate = 100/-"<<endl;
						 			half++;
						 			total_item++;
								 }
								 else if(z==2) 
								 {
								 	am=amount+200;
								 	cout<<"Full plate = 200/-"<<endl;
								 	full++;
								 	total_item++;
								 }
								 else
								 {
								 	cout<<"Wrong choice"<<endl;
								 }
						 	break;
							case'2':
								cout<<"sada Baryani Half/Full =70/150 "<<endl;
						 		cout<<"*****************************"<<endl;
						 		cout<<"Press 1 : Half Plate"<<endl;
						 		cout<<"Press 2 : Full Plate"<<endl;
						 		cout<<"*****************************"<<endl;
						 		cout<<"Enter a Half / Full Plate Choice = ";
						 		cin>>z;
						 	    if(z==1)
						 		{
						 			amount=amount+70;
						 			cout<<"Half plate = 70/- "<<endl;
						 			hal++;
						 			total_item++;
								 }
								 else if(z==2) 
								 {
								 	am=amount+150;
								 	cout<<"Full plate = 150/- "<<endl;
								 	ful++;
								 	total_item++;
								 }
								 else
								 {
								 	cout<<"Wrong choice"<<endl;
								 }
							   break; 
							   case'3':
							   		cout<<"Karachi Naseeb  Baryani Half/Full =150/250 "<<endl;
						 		cout<<"*****************************"<<endl;
						 		cout<<"Press 1 : Half Plate"<<endl;
						 		cout<<"Press 2 : Full Plate"<<endl;
						 		cout<<"*****************************"<<endl;
						 		cout<<"Enter a Half / Full Plate Choice = ";
						 		cin>>z;
						 	    if(z==1)
						 		{
						 			amount=amount+150;
						 			cout<<"Half plate = 150/-"<<endl;
						 			h++;
						 			total_item++;
								 }
								 else if(z==2) 
								 {
								 	am=amount+150;
								 	cout<<"Full plate = 250/-"<<endl;
								 	f++;
								 	total_item++;
							}
								 else
								 {
								 	cout<<"Wrong choice"<<endl;
								 }
							   break; 
							   	
							 }
							 break;
						case'2':
							cout<<"*****************************"<<endl;
							cout<<"Press 1 : Beef Tikka Boti"<<endl;
							cout<<"press 2 : Chicken Tikka boti"<<endl;
							cout<<"press 3 : Malai Tikka boti "<<endl;
							cout<<"Press 4 : meat Boti "<<endl;
							cout<<"*****************************"<<endl;
							cout<<"Enter a Choice For Tikka  = ";
							cin>>chi;
							switch(chi)
							{
								case'1':
									amount=amount+70;
									cout<<"Beef Tikka Boti = 70/-"<<endl;
									total_item++;
									beef++;
									break;
								case'2':
									
									amount=amount+100;
									cout<<"Chicken Tikka boti = 100/-"<<endl;
									total_item++;
									chicken++;
									break;
								case'3':
									amount=amount+150;
									cout<<"Malai Tikka Boti = 150/- "<<endl;
									total_item++;
									malai++;
									break;
								case'4':
									amount=amount+120;
									cout<<"Meat Tikka Boti = 120/- "<<endl;
									total_item++;
									meat++;
									break;
									default:
										cout<<"Wrong choice "<<endl;
										break;
							}
							break;
						case'3':
							cout<<"*****************************"<<endl;
							cout<<"Press 1 : Chicken Seekh kabab "<<endl;
							cout<<"Press 2 : chapli Kabab"<<endl;
							cout<<"Press 3 : Beef seekh kabab"<<endl;
							cout<<"*****************************"<<endl;
							cout<<"Enter a Choice for Kabab = ";
							cin>>cho;
							switch(cho)
							{
								case'1':
									amount=amount+70;
									cout<<"Chicken Seekh kabab = 70/-"<<endl;
									total_item++;
									seekh++;
									break;
								case'2':
									amount=amount+80;
									cout<<"capli Kabab = 80/- "<<endl;
									total_item++;
									chapli++;
									break;
								case'3':
									amount=amount+100;
									cout<<"Beef Seekh kabab = 100/- "<<endl;
									total_item++;
									kabab++;
									break;
									default:
									cout<<"Wrong chocie "<<endl;
									break;		
							}
							break;
							
							
						case'4':
							cout<<"*****************************"<<endl;
							cout<<"Press 1 : Gril Fish "<<endl;
							cout<<"Press 2 : Fish"<<endl;
							cout<<"Press 3 : Kala Rohu"<<endl;
							cout<<"*****************************"<<endl;
							cout<<"Enter a choice for fish = ";
							cin>>choic;
							switch(choic)
							{
								case'1':
									amount=amount+400;
									cout<<"Gril Fish = 400/-"<<endl;
									total_item++;
									gril++;
									break;
									case'2':
										amount=amount+250;
										cout<<"Fish = 250/-"<<endl;
										total_item++;
										fish++;
										break;
									case'3':
										amount=amount+700;
										cout<<"Kala Rohu = 700/-"<<endl;
										total_item++;
										kala++;
										break;
									default:
										cout<<"Wrong Choice "<<endl;
								break;									
							}
							
							break;
								default:
								cout<<"Invalid Choice"<<endl;
								break;
														
							}
					}
			
						
						
				 else if(choice==3)
				 {
				 	showdata();
				 }
				 else if(choice==4)
				 {
				 printdata();
				 }
				else
					{
						cout<<"Invalid choice"<<endl;
					}
			}
		
		}
	
					
};
int main()
{
	menu m;
	m.display();
	showdata();
	printdata();

   return 0;              
}
