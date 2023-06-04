# include<iostream>
using namespace std;
class Distance{
    private:
    int a=3;
    friend int print(Distance );
    public:
    Distance():a(0)
    {

    }
   
};
int print(Distance d){
    d.a=23;
    return d.a;
}
int main()
{
    Distance p;
    cout<<"Number = "<<print(p);
}


