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
	
	obj.InsertFirst(101);
	obj.InsertFirst(51);
	obj.InsertFirst(21);
	obj.InsertFirst(11);
	obj.InsertFirst(1);
	
	obj.InsertLast(111);
	obj.InsertLast(151);
	obj.Display();
	iRet = obj.Count();
	cout<<"Total Count is :"<<iRet<<endl;
	obj.DeleteAtFirst();
	obj.Display();
	
	obj.DeleteAtLast();
	obj.Display();
	
	obj.InsertAtPos(55,4);
	obj.Display();
	iRet = obj.Count();
	cout<<"Total Count is :"<<iRet<<endl;
	
	obj.DeleteAtPos(4);
	obj.Display();
	iRet = obj.Count();
	cout<<"Total Count is :"<<iRet<<endl;
	
	return 0;
}