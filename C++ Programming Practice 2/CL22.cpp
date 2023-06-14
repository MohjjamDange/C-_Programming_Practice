#include<iostream><<
using namespace std;

int main()
{
	int Arr[5];
	
	int *p = NULL;
	
	p = new int[20];
	
	if(*p == NULL)
	{
		cout<<"Memory not Allocted Sucessefully"<<endl;
		
	}
	else
	{
		cout<<"Memory Was Sucessesfully Allocated"<<endl;
		
		
	}
	
	delete[]p;
	
	
	return 0;
}