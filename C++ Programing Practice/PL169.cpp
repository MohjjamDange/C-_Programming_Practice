#include<iostream>

using namespace std;

template <class T>

T Display(T Arr[], int iSize)
{
	for(int iCnt = 0; iCnt < iSize; iCnt++)
	{
		cout<<Arr[iCnt]<<endl;
	}
	
}

int main()
{
	int Brr[] = {10,20,30,40,50};
	Display(Brr, 5);
	
	float Crr[] = {10.11,20.22,30.33,40.44,50.55};
	Display(Crr, 5);
	
	return 0;
}