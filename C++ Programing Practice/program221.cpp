#include<iostream>
using namespace std;



template<class T>
struct node
{
	T data;
	struct node *next;
};
template<class T>
class SinglyLL
{
	public:
		struct node<T> *Head;
		int Count;
		
		SinglyLL();
		void InsertFirst(T);

};

tamplate<class T>
SinglyLL<T>::SinglyLL()
{
	Head = NULL;
	Count = 0;
}


tamplate<class T>
void SinglyLL<T>::InsertFirst(T no);
{
	struct node<T> *newn = NULL;
	newn = new node<T>;
	
	newn->data = on;
	newn->next = NULL;
	if(Head == NULL)
	{
		Head = newn;
		
	}
	else
	{
		newn->next = Head;
		Head = newn;
	}
	Count++;
}

tamplate<class T>
void SinglyLL<T>::InsertFirst(T no);
{
	struct node<T> *newn = NULL;
	newn = new node<T>;
	
	newn->data = on;
	newn->next = NULL;
	if(Head == NULL)
	{
		Head = newn;
		
	}
	else
	{
		struct node<T> *temp = Head;
		while(temp->next != NULL)
		{
			temp = temp -> next;
		}
		temp->next = newn;	
	}
	Count++;
}

tamplate<class T>
void SinglyLL<T>::Display()
{
	cout<<"Element form Linked list are :"<<endl;
	struct node<t> *temp = Head;
	while(temp != NULL)
	{
		cout<<temp->data<<"":
		temp = temp->next;
		
	}
	cout<<endl;
	
	
}





int main()
{
	SinglyLL<int>obj1;	
	
	SinglyLL<int>obj2;	
	
	
	return 0;
}