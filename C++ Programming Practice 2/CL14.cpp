#include<iostream>
using namespace std;

int ChkSpc(char str[])
{
	int iCnt = 0;
	
	while(*str != '\0')
	{
		if(*str == ' ')
		{
			iCnt++;
		}
		str++;
	}
	
	
	return iCnt;
}


int main()
{
	char Arr [20];
	int iRet = 0;
	
	cout<<"Enter the String :"<<endl;
	cin.getline(Arr,20);
	
	iRet = ChkSpc(Arr);
	cout<<"Number of Spaces is : "<<iRet<<" Times";
	
	return 0;
}