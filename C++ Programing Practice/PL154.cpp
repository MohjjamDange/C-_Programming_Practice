#include<iostream>

using namespace std;

void strCpy(char *src, char *dest)
{
	while(*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
		
	}
	*dest = '\0';
	
}

int main()
{
	char Arr[20];
	char Brr[20];
	
	cout<<"Enter the String"<<endl;
	cin.getline(Arr, 20);
	
	strCpy(Arr, Brr);
	
	cout<<"Copying string is :"<<Brr<<endl;
	
	
	
	
	return 0;
}