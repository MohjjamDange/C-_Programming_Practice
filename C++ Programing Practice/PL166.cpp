#include<iostream>

using namespace std;

void SwapX(int *p, int *q)
{
	int temp = 0;
	temp = *p;
	*p = *q;
	*q = temp;
	
}

int main()
{
	int iNo1 = 11;
	int iNo2 = 21;
	
	cout<<"Number Befor Swap :"<<iNo1<<"  "<<iNo2<<endl;
	
	SwapX(&iNo1, &iNo2);
	
	cout<<"Number  After Swap : "<<iNo1<<"  "<<iNo2<<endl;
	
	
	return 0;
	
}

