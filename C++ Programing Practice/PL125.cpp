#include<iostream>

using namespace std;


class ArrayX
{
	private :
	int iLength;
	int *Arr;
	
	public :
	ArrayX(int iNo)
	{
		this->iLength = iNo;
		Arr = new int[iLength];
	}
	
	void Accept()
	{
		int iCnt = 0;
		
		cout<<"Enetr the Elements of Array : "<<endl;
		
		for(iCnt = 0; iCnt < iLength; iCnt++)
		{
			cin>>Arr[iCnt];
		}
		
	}
	void Display()
	{
		int iCnt = 0;
		cout<<"Array is :"<<endl;
		for(iCnt = 0; iCnt < iLength; iCnt++)
		{
			cout<<Arr[iCnt]<<endl;
		}

	}
	
	int Summetion()
	{
		int iSum = 0;
		int iCnt = 0;
		
		for(iCnt = 0;iCnt < iLength; iCnt++)
		{
			iSum = iSum + Arr[iCnt];
		}
		return iSum;
	}
	
	
};

int main()
{
	int iRet = 0;
	ArrayX obj(5);
	
	obj.Accept();
	obj.Display();
	
	iRet = obj.Summetion();
	cout<<"Summetion is :"<<iRet;
	
	
}