#include<iostream>

using namespace std;

class Number
{
	private :
		int iNo;
	public :
		
		void Accept()
		{
			cout<<"Enter the Number"<<endl;
			cin>>this->iNo;
			
		}
		void Display()
		{
			cout<<"Number is :"<<7this->iNo<<endl;
			
		}
	
};

int main()
{
	Number nobj;
	
	nobj.Accept();
	nobj.Display();
	
	return 0;
	
}