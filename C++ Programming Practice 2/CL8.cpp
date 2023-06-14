#include<iostream>
#include<iostream>

using namespace std;

int srtlntX(char str[])
{
	int iCnt = 0;
	
	while(*str != 0)
	{
		iCnt++;
		str++;
	}
	return iCnt;
	
}

int main()
{
	char Arr[20];
	int iRet = 0;
	
	
	cout<<"Enter the String"<<endl;
	cin.getline(Arr,20);
	
	
	iRet = srtlntX(Arr);
	cout<<"Lenth of String :"<<iRet<<endl;
	
	return 0;
}