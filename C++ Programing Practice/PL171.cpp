#include<iostream>

using namespace std;

template <class T>
class ArrayX
{
	public :
	
		T *Arr;
		int iSize;
		
		ArrayX(int iNo);
		~ArrayX();
		void Accept();
		void Display();
		T Max();
		
	
};

template <class T>
ArrayX<T>:: ArrayX(int iNo)
{
			iSize = iNo;
			Arr = new T[iSize];
			
}

template <class T>
ArrayX<T> :: ~ArrayX()
{
	
	delete [] Arr;
}

template <class T>
void ArrayX<T> :: Accept()
{
			cout<<"Enter the Elements of Array"<<endl;
			
			for(int iCnt = 0; iCnt < iSize; iCnt++)
			{
				cin>>Arr[iCnt];
				
			}
			
}

template <class T>
void ArrayX<T>:: Display()
{
			cout<<"Array is :"<<endl;
			
			for(int iCnt = 0; iCnt < iSize; iCnt++)
			{
				cout<<Arr[iCnt]<<endl;
				
			}
			
			
}

template <class T>
T ArrayX<T> :: Max()
{
			int iMax = Arr[0];
			for(int iCnt = 0; iCnt < iSize; iCnt++)
			{
				if(iMax < Arr[iCnt])
				{
					iMax = Arr[iCnt];
				}
				
			}
			
			return iMax;
			
			
}

int main()
{
	ArrayX <int>aobj(5);
	
	aobj.Accept();
	aobj.Display();
	
	int iRet = aobj.Max();
	cout<<"Maximum Number is :"<<iRet<<endl;
	
	ArrayX <float>aobj2(5);
	
	aobj2.Accept();
	aobj2.Display();
	
	float fRet = aobj2.Max();
	cout<<"Maximum Number is :"<<fRet<<endl;
	
	
	return 0;
}