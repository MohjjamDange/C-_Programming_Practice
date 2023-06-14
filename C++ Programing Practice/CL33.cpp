#include<iostream>
using namespace std;

class Demo
{
	public :
	
		void Addition(int x)
		{
			cout<<"Inside the 1st Function"<<endl;
			
		}
		void Addition(int x, int y)
		{
			cout<<"Inside the 2nd Function"<<endl;
			
		}
		void Addition(int x, int y, int z)
		{
			cout<<"Inside the 3rd Function"<<endl;
		}
	
	
	
	
};



int main()
{
	int iRet = 0;
	int a = 10;
	int b = 11;
	int c = 13;
	Demo obj1;
	
	obj1.Addition(a);
	obj1.Addition(a,b);
	obj1.Addition(a,b,c);
	
	

	
	
	
	
	
	
	return 0;
}