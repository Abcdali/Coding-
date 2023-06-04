#include<iostream>
using namespace std;

class Car{
	private:
		int a;
		static int count;
	public:
		Car():a(0){
			
		  count++;
		}
		void print_static_var() {
			//count = 5;
			cout<<count;
		}
		
		void show_data(){
			cout<<count;
		}
};


int Car::count = 0;

int main(){
//	Car c1, c2, c3;
//    const Car c4;
//	//c4.show_data();
//	c1.print_static_var();
	
	//c3.print_static_var();
	
	
	
	
}
