#include<iostream>

using namespace std;

float Area(float Redious, float PI = 3.14)
{
	float fAns = 0.0;
	
	fAns = Redious * Redious * PI;
	
	return fAns;
}

int main()
{
	float fRet = 0.0;
	
	fRet = Area(15.52, 7.52);
	cout<<"Area is "<<fRet<<endl;
	
	fRet = Area(10.42);
	cout<<"Area is "<<fRet<<endl;
	
	return 0;
}