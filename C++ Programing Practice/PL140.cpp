#include<iostream>

using namespace std;

void Display(char *str)
{
	while(*str != '\0')
	{
		cout<<*str;
		str++;
	}
	cout<<endl;
	
}

int main()
{
	char Arr[20];
	 cout<<"Enter the String"<<endl;
	 scanf("%s",Arr);
	 
	 Display(Arr);
	 cout<<sizeof(Arr[0]);
}
