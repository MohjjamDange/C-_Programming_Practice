#include<iostream>

using namespace std;

void Display(char str[])
{
	int iCnt = 0;
	while(*str != '\0')
	{
		if((*str >= 'a') && (*str <= 'z') )
		{
			*str = *str - 32;
		}
		str++;
		
	}
	
}

int main()
{
	char Arr[20];
	int iRet = 0;
	
	cout<<"enter the String"<<endl;
	cin.getline(Arr, 20);
	Display(Arr);
	cout<<"Upper Case String is "<<Arr<<endl;
	
	
	
	return 0;
}