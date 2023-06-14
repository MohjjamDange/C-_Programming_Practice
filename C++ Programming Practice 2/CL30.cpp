 #include<iostream>
using namespace std;

class Demo
{
    public:
	

    int x;
    int y;
	
    Demo()
    {
        cout<<"Inside default constructor\n";
    }
    ~Demo()
    {
        cout<<"Inside destructor\n";
    }
    void fun()
    {
        cout<<"Inside fun\n";
    }
};

int main()
{
     Demo obj;                      // Static object creation
	 
	 cout<<"Step : 0 "<<endl;

	
     Demo *ptr = NULL;
	 
	 cout<<"Step : 1 "<<endl;

	ptr = new Demo;        // Dynamic object creation
	cout<<"Step : 2 "<<endl;

	obj.fun();     // Direct accessing operator
	cout<<"Step : 3 "<<endl;

    ptr->fun();               // Indirect accessing operator
	cout<<"Step : 4 "<<endl;

    delete ptr;
	cout<<"Step : 5 "<<endl;

    // Logic

    return 0;
}