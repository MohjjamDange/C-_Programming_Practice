#include<iostream>

using namespace std;


class Demo
{
	public :
		
		int X;
		int Y;
	Demo()
	{
		cout<<"Inside the constructer"<<endl;

	}
	~Demo()
	{
		out<<"Inside the Disstructer"<<endl;
	}
	
	void fun()
	{
		out<<"Inside the fun"<<endl;
	}
		
	
}




int main()
{
	Demo obj1;
	
	
	
	return 0;
}