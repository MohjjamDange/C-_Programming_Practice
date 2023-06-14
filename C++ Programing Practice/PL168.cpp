#include<iostream>

using namespace std;

template <class T>

T Addition(T &p,T &q)
{
	T Ans;
	
	Ans = p + q;
	return Ans;
	
}

int main()
{
	int iNo1 = 10, iNo2 = 20;
	int iRet = 0;
	
	iRet = Addition(iNo1, iNo2);
	cout<<"Addition is :"<<iRet<<endl;
	
	float fNo1 = 10.12, fNo2 = 20.50;
	float fRet= 0.0;
	
	fRet = Addition(fNo1, fNo2);
	cout<<"Addition is :"<<fRet<<endl;
	
}