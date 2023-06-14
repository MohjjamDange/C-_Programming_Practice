#include<iostream>

using namespace std;

int Display(int iValue)
{
	int iAns = 1;
	int iCnt = 0;
	
	for(iCnt = 1; iCnt <= iValue; iCnt++)
	{
		iAns =  iAns * iCnt;
	}
	
	return iAns;
	
}

int main()
{
	int iNo = 0;
	int iRet = 0;
	
	cout<<"Enter the Number :"<<endl;
	cin>>iNo;
	
	iRet = Display(iNo);
	cout<<"Factorial is : "<<iRet<<endl;
	
	return 0;
}