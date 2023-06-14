#include<iostream>

using namespace std;

class Number
{
	public :
	
	
		int Factorial(int iNo)
		{
			int iCnt = 1;
			int iAns = 1;
			for(iCnt = 1; iCnt <= iNo;iCnt++)
			{
				iAns = iAns * iCnt;
			}
			
			return iAns;
			
		}
	
};

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	Number obj;
	
	cout<<"Enter the Number"<<endl;
	cin>>iValue;
	
	iRet = obj.Factorial(iValue); 
	cout<<"Factorial is :"<<iRet;
	
	
	
	return 0;
}