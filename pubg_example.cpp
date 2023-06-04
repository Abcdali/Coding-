#include<iostream>
using namespace std;

class Player{
	private:
		int health;
		string name;
	public:
		Player():health(0), name("\0"){
		}
		
		Player(int h, string n):health(h), name(n){
			
		}
		
		
		void show_info(){
			cout<<"Name: "<<name<<endl;
			cout<<"Health: "<<health<<endl;
			
		}
		
		
};

class Shooter:public Player{
	private:
		int ammo;
	public:
		Shooter():Player(){
		}
		Shooter(string n, int h, int a):Player(h, n){
			ammo = a;
		}
		
		void show_info(){
			Player::show_info();
			cout<<"Number of Ammo: "<<ammo<<endl;
		}
		
};

//class Medic{
//	private:
//		int medickits;
//	public:
//		void useMedkit() {
//			
//        	if (medkits > 0) {
//            cout << name << " uses a medkit!" << endl;
//            medkits--;
//            health += 50; // increase health by 50
//        	}

		
//};



int main(){
	
	Shooter s1("Ali", 100, 50);
	s1.show_info();
}
