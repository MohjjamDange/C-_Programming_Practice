#include<iostream>

using namespace std;

class Demo
{
	public :
		
		int Addition(int a, int b)
		{
			int iAns = 0;
			
			iAns = a + b;
			
			return iAns;
		}
		int Addition(int a, int b, int c)
		{
			int iAns = 0;
			
			iAns = a + b + c;
			
			return iAns;
		}
		
		int Addition(int a, int b, int c, int d)
		{
			int iAns = 0;
			
			iAns = a + b + c + d;
			
			return iAns;
		}
	
	
	
	
	
};

int main()
{
	int iRet = 0;
	Demo dobj;
	
	iRet = dobj.Addition(11, 12);
	cout<<iRet<<endl;
	iRet = dobj.Addition(11, 12, 13);
	cout<<iRet<<endl;
	iRet = dobj.Addition(11, 12, 13, 14);
	cout<<iRet<<endl;
	
	
	return 0;
}