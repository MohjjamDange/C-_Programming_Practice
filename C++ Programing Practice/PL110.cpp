#include<iostream>

using namespace std;

class Demo
{
	public :
		int i;
	private :
		int j;
	protected :
		int k;
			Demo()
			{
				i = 10;
				j = 20;
				k = 30;
			}
	
	friend void fun();	
};

void fun()
{
	Demo dobj;
	
	cout<<dobj.i<<endl;
	cout<<dobj.j<<endl;
	cout<<dobj.k<<endl;
	
} 

int main()
{
	
	
	fun();
	
	return 0;
}