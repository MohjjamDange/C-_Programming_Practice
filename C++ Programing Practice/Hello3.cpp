#include<iostream>
using namespace std;

void Dispaly(char *str)
{
	while(*str != '\0')
	{
		cout<<*str<<endl;
		str++;
		
	}
	
	
	
}


int main()
{
	char Arr[] = "Hello Mohjjam";
	
	Dispaly(Arr);
	
	return 0;
	
}