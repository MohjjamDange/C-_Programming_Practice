#include<iostream>

using namespace std;

class Number
{
	private : 
		int iNo;
	public : 
		
		void Accept()
		{
			cout<<"Enetr the Number"<<endl;
			cin>>this->iNo;
		}
		
		void Display()
		{
			cout<<this->iNo<<endl;
		}
		int Factorial()
		{
			int iCnt = 1;
			int iFact = 1;
			
			for(iCnt = 1; iCnt <= iNo; iCnt++)
			{
				iFact = iFact * iCnt;
			}
			
			return iFact;
			
		}
	
};


int main()
{
	int iRet = 0;
	
	Number obj;
	
	obj.Accept();
	obj.Display();
	
	iRet = obj.Factorial();
	cout<<"Factorial is : "<<iRet<<endl;
	
	
	
	return 0;
}