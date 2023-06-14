#include<iostream>

using namespace std;

class ArrayX
{
	private :
	int iSize;
	int *Arr;
	
	public :

	ArrayX(int iNo)
	{
		this->iSize = iNo;
		Arr = new int[iSize];
		
	}
	
	void Accept()
	{
		int iCnt = 0;
		
		cout<<"Enter the Elemnts of Array"<<endl;
		
		for(iCnt = 0; iCnt < iSize; iCnt++)
		{
			cin>>Arr[iCnt];
		}
		
	}
	
	void Display()
	{
		int iCnt = 0;
		
		cout<<"Elements of Array"<<endl;
		
		for(iCnt = 0; iCnt < iSize; iCnt++)
		{
			cout<<Arr[iCnt]<<endl;
			
		}
		
	}
	
	int Summetion()
	{
		int iCnt = 0, iSum = 0;
		
		for(iCnt = 0; iCnt < iSize; iCnt++)
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
	
	return 0;
}