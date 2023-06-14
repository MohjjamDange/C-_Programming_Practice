#include<iostream>

using namespace std;

class Arithmatic
{
	public :
	
	int Factorial(int iValue)
	{
		int iCnt = 1;
		int iAns = 1;
		
		for(iCnt= 1; iCnt <= iValue; iCnt++)
		{
			
			iAns = iAns * iCnt;
			
			
		}
		
		return iAns;
		
	}
	
};


int main()
{
	int iRet = 0;
	int iNo = 0;
	
	
	Arithmatic obj;
	
	cout<<"Enter the Number"<<endl;
	cin>>iNo;
	
	iRet = obj.Factorial(iNo);
	cout<<"Answer is : "<<iRet<<endl;
	
	return 0;
}