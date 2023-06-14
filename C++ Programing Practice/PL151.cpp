#include<iostream>

using namespace std;

void Display(char str[])
{
	int iCnt = 0;
	while(*str != '\0')
	{
		if((*str >= 'A') && (*str <= 'Z') )
		{
			*str = *str + 32;
			
		}
		
		str++;
		
	}
	
	
}

int main()
{
	char Arr[20];
	
	cout<<"enter the String"<<endl;
	cin.getline(Arr, 20);
	Display(Arr);
	cout<<"Lower Case string is :"<<Arr;
	
	
	
	
	return 0;
}