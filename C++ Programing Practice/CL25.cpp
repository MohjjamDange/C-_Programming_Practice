#include<iostream>

using namespace std;

class Demo
{
	public:
	
		int x;
		int y;
		
	Demo()
	{
		cout<<"Inside of Defoult Comstructor"<<endl;
		x = 0;
		y = 0;
		
	}
	Demo(int iNo1,int iNo2)
	{
		cout<<"Inside of the Perametrised Constructor"<<endl;
		
		
		x = iNo1;
		y = iNo2;
		
	}
	
	
	Demo(Demo  &ref)    // Copy constructor
        {
            cout<<"Inside copy constructor\n";
        }
	
	
	
	~Demo()
	{
		cout<<"inside of the Disstructor"<<endl;
		
	}
	
	
	
};



int main()
{
	Demo obj1(51,55);
	Demo obj2(21,23);
	
	cout<<"The Value of iNo1 :"<< obj1.x<<endl;
	cout<<"The Value of iNo1 :"<< obj2.x<<endl;
	
	cout<<sizeof(obj1)<<endl;
	cout<<sizeof(obj2)<<endl;
	
	
	
	
	return 0;
}