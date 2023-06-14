#include<iostream>

using namespace std;

int count(char str[])
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
	char Arr[20];
	int iRet = 0;
	
	cout<<"enter the String"<<endl;
	cin.getline(Arr, 20);
	iRet = count(Arr);
	cout<<"Total Frequecy of White Spaces is "<<iRet<<endl;
	
	
	
	return 0;
}