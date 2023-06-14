#include<iostream>

using namespace std;

char Case(char str[])
{
	int iCnt = 0;
	 
	
	while(*str != '\0')
	{
		if((*str >= 'A') && (*str <= 'Z'))
		{
			*str = *str + 32;
			
		}
		str++;
		
		
	}
	return *str;
}

int main()
{
	char Arr[20];
	int iRet = 0;
	
	cout<<"Enter The String"<<endl;
	cin.getline(Arr,20);
	
	iRet = Case(Arr);
	cout<<"Change case String is : "<<iRet<<endl;
	
	
	
	return 0;
}