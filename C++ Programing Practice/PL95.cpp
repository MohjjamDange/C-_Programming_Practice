#include<iostream>

using namespace std;

class Arthmatic
{                           
	public :
		int i;
		int j;
		
		Arthmatic()
		{
			cout<<"Inside of Defoult Constructer"<<endl;
			i = 0;
			j = 0;
		}
		
		Arthmatic(int iNo1, int iNo2)
		{
			cout<<"Inside of Parametrised Constructed"<<endl;
			i = iNo1;
			j = iNo2;
			
		}
		
		int Addition()
		{
			int iAns = 0;
			iAns = i + j;
			return iAns;
		}
		
		int Subtraction()
		{
			int iAns = 0;
			iAns = i - j;
			return iAns;
		}
		
	
};

int main()
{
	int iRet = 0;
	int iValue1 = 0;
	int iValue2 = 0;
	
	cout<<"Enter the First Number"<<endl;
	cin>>iValue1;
	
	cout<<"Enter the Second Number"<<endl;
	cin>>iValue2;

	Arthmatic obj;
	Arthmatic obj2(iValue1, iValue2);
	
	iRet = obj2.Addition();
	cout<<"Addition is :"<<iRet<<endl;
	
	iRet = obj2.Subtraction();
	cout<<"Subtraction is :"<<iRet<<endl;
	
	
	
	return 0;
}