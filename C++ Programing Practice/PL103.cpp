#include<iostream>

using namespace std;

class Base
{
	public : 
	
		int i, j;
	
	Base()
	{
		cout<<"Inside of Base Constructer"<<endl;
	}
	~Base()
	{
		cout<<"Inside of Base Distructer"<<endl;
	}
	
	void fun()
	{
		cout<<"Inside of Base fun"<<endl;
	}
	
};


class Derived : public Base
{
	public :
		int x, y;
		
	Derived()
	{
		cout<<"Inside of Derived Constructer"<<endl;
		
	}
	~Derived()
	{
		cout<<"Inside of Derived Distructer"<<endl;
	}
	
	void gun()
	{
		cout<<"Inside of Derived Gun"<<endl;
	}
};
int main()
{
	Derived dobj;
	dobj.fun();
	dobj.gun();
	
	
	
	return 0;
}