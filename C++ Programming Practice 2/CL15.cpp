#include<iostream>

using namespace std;
int Count(char str[])
{
	int iCnt  = 0;

	while(*str != '\0')
	{
		if((*str == 'a') || (*str == 'e') || ( *str == 'i') || (*str == 'o') || (*str == 'u'))
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
	
	cout<<"Ente the String"<<endl;
	cin.getline(Arr,20);
	
	iRet = Count(Arr);
	cout<<"Number of Vovels : "<<iRet<<" total"<<endl;

	return 0;
}