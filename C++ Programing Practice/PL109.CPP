#include<iostream>

using namespace std;

class Base
{
	public :
		
		int x, y;
		
		
		virtual void fun()
		{
			cout<<"Inside of Derived fun"<<endl;
		}
		void sun()
		{
			cout<<"Inside of Derived mun"<<endl;	
		}
		virtual void gun()
		{
			cout<<"Inside of Derived gun"<<endl;	
		}
		virtual void run()
		{
			cout<<"Inside of Derived run"<<endl;
		}	
	
};

class Derived : public Base
{
	public :
		
		int i, j;
		
		void fun()
		{
			cout<<"Inside of Derived fun"<<endl;
		}
		void mun()
		{
			cout<<"Inside of Derived mun"<<endl;	
		}
		void gun()
		{
			cout<<"Inside of Derived gun"<<endl;	
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
	
	
	 
	
	
	
	
	return 0;
}