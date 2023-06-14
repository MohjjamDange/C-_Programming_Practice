#include<iostream>

using namespace std;

void Reverse(char *str)
{
	char *start = str;
	char *end = str;
	char temp;
	
	while(*end != '\0')
	{
		end++;
	}
	end--;
	
	while(start < end)
	{
		temp  = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
		
	}
	
}

int main()
{
	char Arr[20];
	
	cout<<"Enter the String"<<endl;
	cin.getline(Arr, 20);
	
	Reverse(Arr);
	
	cout<<"Reverse String is :"<<Arr<<endl;
	
	
	return 0;
}