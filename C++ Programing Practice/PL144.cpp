#include<iostream>

using namespace std;
int strlnth(char str[])
{
	int iCnt = 0;
	while(*str != '\0')
	{
		cout<<*str;
		str++;
		iCnt++;
	}
	return iCnt;
}  

int main()
{
	char Arr[20];
	int iRet = 0;
	
	cout<<"Enter the String"<<endl;
	cin.getline(Arr, 20);
	
	iRet = strlnth(Arr);
	cout<<"length is :"<<iRet;
	
	return 0;
}