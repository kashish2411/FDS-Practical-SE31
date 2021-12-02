#include<iostream>
#include<string.h>
#define max 50
using namespace std;

class STACK
{
	private:
		char a[max];
		int top;
	
	public:
		STACK()
		{
			top=-1;	
		}	
		
		void push(char);
		void palindrome();
};

void STACK::push(char c)
{
	top++;
	a[top] = c;
	a[top+1]='\0';
	
}






void STACK::palindrome()
{	
	char str[max];
	int i,j;		

	for(i=top,j=0; i>=0; i--,j++)
	{
		str[j]=a[i];
	}
	str[j]='\0';
	
	
	if(strcmp(str,a) == 0)
		cout<<"\n\nString is palindrome.";
	else
		cout<<"\n\nString is not palindrome.";
}


int main()
{
	STACK stack;

	char str[max];
	int i=0;
	
	cout<<"\nEnter string to check is it palindrome or not : \n";
	
	cin.getline(str , 50);
	
	while(str[i] != '\0')
	{
		stack.push(str[i]);
		i++;
	}

	stack.palindrome();

	
}

