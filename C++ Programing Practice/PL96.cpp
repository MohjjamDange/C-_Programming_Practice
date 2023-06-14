#include<iostream>

using namespace std;

class Arithmatic
{
	public :
	
	int i;
	int j;
	
	
	Arithmatic()
	{
		cout<<"Inside of defoult Constructer"<<endl;
	}
	
	Arithmatic(int iNo1, int iNo2)
	{
		cout<<"Inside of Perametrised Constructer"<<endl;
		i = iNo1;
		j = iNo2;
	}
	
	Arithmatic(const Arithmatic &obj1)
	{
		i = obj1.i;
		j = obj1.j;
	}
	
};

int main()
{
	Arithmatic obj1(24, 25);
	Arithmatic obj2(obj1);
	
	cout<<obj2.i<<endl;
	cout<<obj2.j<<endl;
	
	return 0;
}