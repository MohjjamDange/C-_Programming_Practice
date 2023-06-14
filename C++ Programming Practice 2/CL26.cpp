// For the Testing Perpose the code Written.

#include<iostream>

using namespace std;

int main()
{
	int Arr[5];
	
	int *p = NULL;
	
	cout<<"Address of Arr :"<< &Arr<<endl;
	cout<<"Value inside of the Pointer : "<< p <<endl;
	cout<<sizeof(Arr)<<endl;
	cout<<sizeof(p)<<endl;
	cout<<"Address of p :"<< &p<<endl;
	
	
	p = new int[5];
	
	
	
	
	
	if(p == NULL)
	{
		cout<<"Memory Not Allocated"<<endl;
		
	}
	else
	{
		
	cout<<"Memory Allocated Succefully"<<endl;
	cout<<"Value inside of the Pointer : "<< *p <<endl;
	cout<<"Address of p :"<< &p<<endl;
		
	}

	
	delete[]p;
	
	
	
	
	return 0;
}