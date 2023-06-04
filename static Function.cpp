# include<iostream>
using namespace std;
class ali{
        private:
        static int total;
        int id;
        public:
        ali()
        {
            total++;
            id=total;
        }
        ~ali()
        { 
            total--;
            cout<<"Ali Destructor "<<id<<endl;
        }
        static void showtotal()
        {
            cout<<"Total is = "<<total<<endl;
        }
        void showid()
        {
            cout<<"id number = "<<id<<endl;
        }

};
int ali::total=1;
int main()
{
    ali a;
    ali::showtotal();
    ali a2,a3;
    ali::showtotal();
    a.showid();
    a2.showid();
    a3.showid();
}
