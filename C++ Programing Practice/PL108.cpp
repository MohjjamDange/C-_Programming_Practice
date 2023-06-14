#include<iostream>

using namespace std;

class Base
{
	public :
		
		int i;
		int j;
		
		void fun()
		{
			cout<<"Inside of Base fun"<<endl;
		}
		
		void gun()
		{
			cout<<"Inside of Base gun"<<endl;
		}
		
};

class Derived : public Base
{
	public :
	
		int x;
		int y;
		
		void fun()
		{
			cout<<"Inside of Derived fun"<<endl;
		}
		
		void sun()
		{
			cout<<"Inside of Derived sun"<<endl;
		}
	
};

int main()
{
	Base *bp = new Derived();
	bp->fun();
	bp->gun();
	
	
	
	return 0;
}