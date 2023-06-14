#include<iostream>

using namespace std;

class Demo
{
	public :
	
		Demo()
		{
			cout<<"Inside of Constructer"<<endl;
			
		}
		void fun()
		{
			cout<<"Inside of fun Method"<<endl;
		}
	
};

int main()
{
	Demo *ptr = NULL;
	
	ptr = new Demo;
	
	ptr->fun();
	
	return 0;
}