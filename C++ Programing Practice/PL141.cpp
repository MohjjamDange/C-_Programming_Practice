#include<iostream>

using namespace std;

void Display(char str[])
{
	while(*str != '\0')
	{
		cout<<*str;
		str++;
	}
	
}

int main()
{
	char Arr[20];
	
	cout<<"Enter the String"<<endl;
	scanf("%[^'\n']s",Arr);
	
	Display(Arr);
	
	
	return 0;
}