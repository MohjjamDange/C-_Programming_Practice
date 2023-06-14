#include<iostream>

using namespace std;

bool strcom(char *src, char *dest)
{
	while((*src != '\0') &&(*dest != '\0'))
	{
		if(*src != *dest)
		{
			break;
		}
		src++;
		dest++;
		
	}
	if((*src == '\0')&&(*dest == '\0'))
	{
		return true;
	}
	else
	{
		return false;
	}
	
}
int main()
{
	bool bRet;
	char Arr[20];
	char Brr[20];
	
	cout<<"Enetr the First string"<<endl;
	cin.getline(Arr , 20);
	
	cout<<"Enetr the Second string"<<endl;
	cin.getline(Brr , 20);
	
	bRet = strcom(Arr, Brr);
	if(bRet == true)
	{
		cout<<"String is Equal"<<endl;
	}
	else
	{
		cout<<"strig is NOT Equal"<<endl;
	}
	
	return 0;
}