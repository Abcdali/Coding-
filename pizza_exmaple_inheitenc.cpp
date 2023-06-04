#include<iostream>
using namespace std;

class FoodItem{
	private:
		string food_name;
		int food_price;
	public:
		FoodItem():food_name("\0"), food_price(0){
			
		}
		FoodItem(string fn, int fp){
			food_name = fn;
			food_price = fp;
		}
		
		void display_details(){
			cout<<"Food Name is: "<<food_name<<endl; 
			cout<<"Food Price is: "<<food_price<<endl;
		}
};

class Pizza:public FoodItem{
	private:
		string flavour;
		
	public:
		Pizza():FoodItem(){
			flavour = "\0";
		}
		Pizza(string fn, int fp, string f):FoodItem(fn, fp), flavour(f){
			flavour = f;
		}
		
		void display_details(){
			FoodItem::display_details();
			cout<<"Pizza Flavour: "<<flavour<<endl;
		}
};



int main(){
	
	Pizza p1("Pizza", 234, "papparoni");
	p1.display_details();
}
