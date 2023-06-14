#include<iostream>

using namespace std;

void CallValue(int iNo)
{
	iNo++;
}

void CallAddress(int *p)
{
	(*p)++;
}

void Callref(int &ref)
{
	ref++;
}

int main()
{
	int a = 10;
	int b = 10;
	int c = 10;
	
	
	CallValue(a);
	cout<<"Value is :"<< a<<endl;
	
	CallAddress(&b);
	cout<<"Value is :"<< b<<endl;
	
	
	Callref(c);
	cout<<"Value is :"<< c<<endl;
	
	return 0;
}