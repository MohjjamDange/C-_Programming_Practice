#include<iostream>

using namespace std;

void Case(char str[])
{
	while(*str != '\0')
	{
		if((*str >= 'a') && (*str <= 'z'))
		{
			*str = *str - 32;
		}
		str++;

	}
	
}

int main()
{
	char Arr[20];
	
	cout<<"Enter the string"<<endl;
	cin.getline(Arr,20);
	
	Case(Arr);
	cout<<"Changing the case :"<<Arr<<endl;
	
	
	return 0;
}