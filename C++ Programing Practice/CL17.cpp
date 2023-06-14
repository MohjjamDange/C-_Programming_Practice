#include<iostream>

using namespace std;

void Case(char str[])
{
	
	while(*str != '\0')
	{
		if((*str >= 'A') && (*str <= 'Z'))
		{
			*str = *str + 32;
			
		}
		str++;
		
	}

}

int main()
{
	char Arr[20];
	int iRet = 0;
	
	cout<<"Enter The String"<<endl;
	cin.getline(Arr,20);
	
	Case(Arr);
	cout<<"Change case String is : "<<Arr<<endl;
	
	return 0;
}