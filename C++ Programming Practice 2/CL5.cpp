#include<iostream>

using namespace std;

void Display(char str[])
{
	while(*str != '\0')
	{
		cout<<*str<<"\n";
		str++;
		
	}
	
	
}




int main()
{
	char Arr[20];
	cout<<"Enter the String"<<"\n";
	cin>>Arr;
	
	Display(Arr);
	
	return 0;
}