#include<iostream>

using namespace std;

class Number
{
	private:
	
		int iNo;
	public :	
		
		void Accept()
		{
			cout<<"Enter the Number"<<endl;
			cin>>this->iNo;
			
		}
		void Display()
		{
			cout<<this->iNo<<endl;
		}
		
		int Addition()
		{
			int iCnt = 0;
			int iSum = 0;
			
			for(iCnt = 0; iCnt <= iNo; iCnt++)
			{
				iSum = iSum + iCnt;
				
			}
			return iSum;
			
		}
	
	
	
	
};

int main()
{
	int iRet = 0;
	Number obj;
	
	obj.Accept();
	obj.Display();
	iRet = obj.Addition();
	cout<<"Addition is :"<<iRet<<endl;
	
	obj.Accept();
	obj.Display();
	iRet = obj.Addition();
	cout<<"Addition is :"<<iRet<<endl;
	
	
	
	
	
	return 0;
}