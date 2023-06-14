#include<iostream>

using namespace std;

class Demo
{
	public :
		
		int i;
		int j;
		static int x;
		
		Demo()
		{
			i = 10;
			j = 20;
		}
		void fun()
		{
			cout<<this->i<<endl;
			cout<<this->j<<endl;
			cout<<this->x<<endl;
		}
		
		static void gun()
		{
			cout<<x<<endl;
		}
	
};

int Demo::x =30;

int main()
{
	
	cout<<Demo::x<<endl;
	Demo::gun();
	
	Demo dobj;
	dobj.fun();
	

	
	
	
	
	
}