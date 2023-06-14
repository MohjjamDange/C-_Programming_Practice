#include<iostream>

using namespace std;

class Base
{
	public :
	Base()
	{
		cout<<"Inside of Base Constructer"<<endl;
	}
	
	~Base()
	{
		cout<<"Inside of Base Distructer"<<endl;
	}
	
};

class Derived : public Base
{
	public : 
	
	Derived()
	{
		cout<<"Inside of Derived Constructer"<<endl;
	}
	
	 ~Derived()
	{
		cout<<"Inside of Derived Distructer"<<endl;
	}
	
};

int main()
{
	Base bobj;
	
}