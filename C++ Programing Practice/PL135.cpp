#include<iostream>

using namespace std;

struct node
{
	int data;
	struct node *next;

};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

class SinglyCLL
{
	private :
		PNODE Head;
		PNODE Tail;
		
	public :
		
		 SinglyCLL();
		void InsertFirst(int iNo);
		void InsertLast(int iNo);
		void DeleteAtFirst();
		void DeleteAtLast();
		void Display();
		int Count();
		void InsertAtPos(int iNo, int iPos);
		void DeleteAtPos(int iPos);
		
};

SinglyCLL :: SinglyCLL()
		{
			Head = NULL;
			Tail = NULL;
			
		}

void SinglyCLL :: InsertFirst(int iNo)
{
	
	PNODE newn = NULL;
	
	newn = new NODE;
	
	newn->data = iNo;
	newn->next = NULL;
	
	if((Head == NULL) && (Tail == NULL))
	{
		Head = newn;
		Tail = newn;
		
	}
	else
	{
		newn->next = Head;
		Head = newn;
		
	}
	Tail->next = Head;
	
}

void SinglyCLL:: InsertLast(int iNo)
{
	
	
	PNODE newn = NULL;
	
	newn = new NODE;
	
	newn->data = iNo;
	newn->next = NULL;
	
	if((Head == NULL)&&(Tail == NULL))
	{
		Head = newn;
		Tail = newn;
		
	}
	else
	{
		Tail->next = newn;
		Tail = newn;
	
	}
	Tail->next = Head;
	
}

void SinglyCLL :: Display()
{
	
	PNODE Temp = Head;
	
	while(Temp != Tail)
	{
		cout<<"|"<<Temp->data<<"|";
		Temp = Temp->next;
	}
	
	cout<<"|"<<Temp->data<<"|";
	cout<<endl;
	
}

int SinglyCLL :: Count()
{
	PNODE Temp = NULL;
	int iCnt = 0;
	
	Temp = Head;
	
	while(Temp != Tail)
	{
		Temp = Temp->next;
		iCnt++;
		
	}
	
	return iCnt + 1;
	
}

void SinglyCLL::DeleteAtFirst()
{
	if((Head == NULL) &&(Tail == NULL))
	{
		return;
	}
	else if(Head == Tail)
	{
		delete Head;
		Head == NULL;
		Tail = NULL;
	}
	else
	{
		Head = Head->next;
		delete Tail->next;
		
	}
	Tail->next = Head;
}

void SinglyCLL::DeleteAtLast()
{
		if((Head == NULL) &&(Tail == NULL))
	{
		return;
	}
	else if(Head == Tail)
	{
		delete Head;
		Head == NULL;
		Tail = NULL;
	}
	else
	{ 
		PNODE Temp = NULL;
		Temp = Head;
		
		while(Temp->next != Tail)
		{
			Temp = Temp->next;
		}
		delete Tail;
		Tail = Temp;
	
	}
	Tail->next = Head;
	
}

void SinglyCLL::InsertAtPos(int iNo, int iPos)
{
	cout<<"Inside of InsertAtPos"<<endl;
	int iSize = 0;
	
	iSize = Count();
	if((iPos < 1) ||(iPos > iSize+1))
	{
		cout<<"Invalied Position"<<endl;
		return;
	}
	if(iPos  == 1)
	{
		InsertFirst(iNo);
	}
	else if(iPos  == iSize+1)
	{
		InsertLast(iNo);
	}
	else
	{
		PNODE newn = NULL;
		PNODE Temp = NULL;
		int iCnt = 0;
		
		Temp = Head;
		
		newn = new NODE;
		
		newn->data = iNo;
		newn->next = NULL;
		
		for(iCnt = 1; iCnt < (iSize - 1); iCnt++)
		{
			Temp = Temp->next;
			
		}
		newn->next = Temp->next;
		Temp->next = newn;

	}

}

void SinglyCLL::DeleteAtPos(int iPos)
{
	PNODE Temp = NULL;
	
	int iSize = Count();
	
	if((iPos < 1) || (iPos> iSize+1))
	{
		cout<<"Invalied Input"<<endl;
		return;
	}
	if(iPos == 1)
	{
		DeleteAtFirst();
	}
	else if(iPos == iSize+1)
	{
		DeleteAtLast();
	}
	else
	{
		PNODE Temp = NULL;
		PNODE TempDelete = NULL;
		
		Temp = Head;
		
		for(int iCnt = 1; iCnt < iPos-1; iCnt++)
		{
			Temp = Temp->next;
		}
		TempDelete = Temp->next;
		Temp->next = Temp->next->next;
		delete TempDelete;
		
	}
	
}


int main()
{
	int iRet = 0;
	SinglyCLL obj;
	int iValue = 0;
	int ipos;
	int iChoice = 1;
	while(iChoice != 0)
	{
		cout<<"Enter the Your Choice"<<endl;
		cout<<"1 : InsertFirst"<<endl;
		cout<<"2 : InsertLast"<<endl;
		cout<<"3 : InsertAtPos"<<endl;
		cout<<"4 : DeleteAtFirst"<<endl;
		cout<<"5 : DeleteAtLast"<<endl;
		cout<<"6 : DeleteAtPos"<<endl;
		cout<<"7 : Display the data"<<endl;
		cout<<"8 : Count the Elemenets"<<endl;
		cout<<"9 : Terminating Appilication"<<endl;
		
		cout<<"Enter Your Choice : ";
		cin>>iChoice;
		
	
		switch(iChoice)
		{
			case 1:
			
			cout<<"Enter the value To Insert"<<endl;
			cin>>iValue;
			obj.InsertFirst(iValue);
			break;
			
			case 2 :
			
			cout<<"Enter the Value which wants Insert At Last"<<endl;
			cin>>iValue;
			obj.InsertLast(iValue);
			break;
			
			case 3 :
			
			cout<<"Enter the Value to Insert"<<endl;
			cin>>iValue;
			cout<<"Enetr the Position of Elemenet"<<endl;
			cin>>ipos;
			obj.InsertAtPos(iValue, ipos);
			break;
			
			case 4:
			obj.DeleteAtFirst();
			break;
			
			case 5:
			
			obj.DeleteAtLast();
			break;
			
			case 6:
			
			cout<<"Enter the Position which you want to Deltete"<<endl;
			cin>>ipos;
			
			obj.DeleteAtPos(ipos);
			break;
			
			case 7:
			
			obj.Display();
			break;
			
			case 8:
			
			iRet = obj.Count();
			cout<<"Total Count is :"<<iRet;
			break;
			
			case 9:
			
			cout<<"Thank you to using Application"<<endl;
			iChoice = 0;
			break;
			
			default:
			cout<<"Please selete Proper Choice"<<endl;
			break;
			
		}
	}
	
	
	
	return 0;
}