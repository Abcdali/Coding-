# include<iostream>
using namespace std;
class B;
class classA{
	public:
			classA():numA(13)
			{
				
			}
	private:
		int numA;
			friend int add(classA,classB);
		
		
};
class classB{
		public:
			classB():numB(2)
			{
				 
			}
	private:
		int numB;
			friend int add(classA,classB)
	
		
};
int add(classA objA,classB objB)
{
  return(objA.numA+abjB.numB);
}
int main()
{
	classB objB;
	classA objA;
	cout<<"Sum = "<<add(objA.numA+abjB.numB);
}
