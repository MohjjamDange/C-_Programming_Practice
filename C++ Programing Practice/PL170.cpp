#include<iostream>

using namespace std;

template <class T>

T Display(T Brr[], int iSize)
{
	T iMax = Brr[0];
	cout<<"Array is :"<<endl;
	for(int iCnt = 0; iCnt < iSize; iCnt++)
	{
		cout<<Brr[iCnt]<<endl;
		
		
		if(iMax < Brr[iCnt])
		{
			iMax = Brr[iCnt];
		}
		
	}
	return iMax;
	
}


int main()
{
	int iRet = 0;
	int Arr[] = {10, 15, 18, 3,13};
	
	iRet = Display(Arr, 5);
	cout<<"Maximum Elments of Array is : "<<iRet<<endl;
	
	float fRet;
	float Crr[] = {10.11, 15.55, 18.12, 3.23,13.16};
	
	fRet = Display(Crr, 5);
	cout<<"Maximum Elments of Array is : "<<fRet<<endl;
	
	
	return 0;
}