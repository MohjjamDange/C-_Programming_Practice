#include<iostream>

using namespace std;

class Hello
{
	public :
	
		void fun();
		void gun();
	
};


class Demo
{
	public :
	int i;
	protected : 
	int j;
	private :
	int k;
	
	public : 
		Demo()
		{
			i = 10;
			j = 11;
			k = 12;
		}
		
		friend class Hello;
	
};

void Hello::fun()
{
	Demo dobj;
	
	cout<<dobj.i<<endl;
	cout<<dobj.j<<endl;
	cout<<dobj.k<<endl;
}

void Hello::gun()
{
	Demo dobj;
	
	cout<<dobj.i<<endl;
	cout<<dobj.j<<endl;
	cout<<dobj.k<<endl;
}


int main()
{
	Hello hobj;
	
	hobj.fun();
	hobj.gun();
	
	
	
	return 0;
}