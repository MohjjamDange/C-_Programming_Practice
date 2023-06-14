#include<iostream>

using namespace std;

class Demo
{
	public :
		int i;
		const int j;
		
		Demo() : j(15)
		{
			i = 10;
		}
		
};

int main()
{
	Demo dobj;
	
	cout<<dobj.i<<endl;
	cout<<dobj.j<<endl;
	
	
	
	return 0;
}