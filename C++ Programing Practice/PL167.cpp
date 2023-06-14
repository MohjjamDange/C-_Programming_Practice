#include<iostream>

using namespace std;

template <class T>

void swapX(T &p, T &q)
{
	int Temp;
	Temp = p;
	p = q;
	q = Temp;
	
}

int main()
{
	int iNo1 = 11, iNo2 = 21;
	cout<<"Data Befor Swap"<<iNo1<<" "<<iNo2<<endl;
	swapX(iNo1, iNo2);
	cout<<"Data After Swap"<<iNo1<<" "<<iNo2<<endl;
	
	float fNo1 = 11.11, fNo2 = 53.56;
	cout<<"Data Befor Swap"<<fNo1<<" "<<fNo2<<endl;
	swapX(fNo1, fNo2);
	cout<<"Data After Swap"<<fNo1<<" "<<fNo2<<endl;
	
	char chNo1 = 'A', chNo2 = 'Z';
	cout<<"Data Befor Swap"<<chNo1<<" "<<chNo2<<endl;
	swapX(chNo1, chNo2);
	cout<<"Data After Swap"<<chNo1<<" "<<chNo2<<endl;
	
	return 0;
}