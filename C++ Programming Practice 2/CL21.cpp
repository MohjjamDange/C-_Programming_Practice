#include<iostream>
using namespace std;

void strrevX(char *str)
{
    char *start = str;
    char *end = str;
    char temp;

    while(*end != '\0')
    {
        end++;
    }
    end--;
	
	
    
    while(start < end)
    {
           temp = *start;
		   cout<<"data of *start :"<< *start<<endl;
           *start = *end;
		   cout<<"data of *end :"<< *end<<endl;
           *end = temp;
		   cout<<"data of temp :"<< temp<<endl;

           start++;
		   cout<<"data of start :"<< start<<endl;
           end--;
		   cout<<"data of end :"<< end<<endl;
    }
}

int main()
{
    char Arr[20];

    cout<<"Enter string"<<endl;
    cin.getline(Arr,20);

    strrevX(Arr);

    cout<<"String after revserse : "<<Arr<<endl;

    return 0;
}
