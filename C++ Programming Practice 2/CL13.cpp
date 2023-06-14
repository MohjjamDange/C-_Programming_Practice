#include<iostream>

using namespace std;

int CheckSmall(char *str)
{
	int iCnt = 0;
	
	while(*str != '\0')
	{
		if((*str >= 97) && (*str <= 122))
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
	
	cout<<"Enter the String"<<endl;
	cin.getline(Arr,20);
	
	iRet=CheckSmall(Arr);
	cout<<"The total Number of small Case latter : "<<iRet<<" Times"<<endl;
	
	return 0;
}