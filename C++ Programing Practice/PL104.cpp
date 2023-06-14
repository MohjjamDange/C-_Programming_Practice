#include<iostream>

using namespace std;

class Base
{
	public :
	
		Base()
		{
			cout<<"Inside ofBase constructer"<<endl;
		}
		~Base()
		{
			cout<<"Inside of Base Distructer"<<endl;
		}
		
		void fun()
		{
			cout<<"Inside of base Fun"<<endl;
		}
	
	
	
};

class Derived : public Base
{
	public :
	
		Derived()
		{
			cout<<"Inside of Derived constructer"<<endl;
		}
		~Derived()
		{
			cout<<"Inside of Derived Distructer"<<endl;
		}
		void gun()
		{
			cout<<"Inside of base gun"<<endl;
		}
	
	
	
};

class Derived1: public Derived
{
	public :
	
		Derived1()
		{
			cout<<"Inside of Derived1 constructer"<<endl;
		}
		~Derived1()
		{
			cout<<"Inside of Derived1 Distructer"<<endl;
		}
		void run()
		{
			cout<<"Inside of base run"<<endl;
		}
	
	
	
	
};

int main()
{
	Derived1 obj;
	
	obj.fun();
	obj.gun();
	obj.run();
	
	
	return 0;
}