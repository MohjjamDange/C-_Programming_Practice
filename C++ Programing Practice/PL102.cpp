#include<iostream>

using namespace std;

class Demo
{
	int i;
	public : 
		int j;
	protected :
		int k;
		
	public :
		
		Demo()
		{
			i = 10;
			j = 20;
			k = 30;
		}
		
		void fun()
		{
			cout<<"Inside of Fun function"<<endl;
			gun();
		}
		
		
	private : 
		
		void gun()
		{
			cout<<"Inside of gun function"<<endl;	
		}
	
};	

int main()
{
	Demo obj;
	
	cout<<obj.j<<endl;
	obj.fun();

	return 0;
}
