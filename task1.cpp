#include<iostream>
using namespace std;
void add(int num1,int num2);
void multiplication(int num1,int num2);
void subtraction(int num1,int num2);
main()
{
	int num1,num2;
	char operation;
	cout<<"	Enter first num is:"<<endl;
	cin>>num1;
	cout<<"Enter second num is:"<<endl;
	cin>>num2;
	cout<<"Operation is:";
	cin>>operation;
	if(operation=='+')
	{
	 add(num1,num2);
	}
	if(operation=='*')
	{
	 multiplication(num1,num2);
	}
        if(operation=='-')
	{
	 subtraction(num1,num2);
	}	
}

void add(int num1,int num2)
{
int sum=num1+num2;
cout<<"sum is:"<<sum<<endl;
}
void multiplication(int num1,int num2)
{
int multiplication=num1*num2;
cout<<"Multiplication is:"<<multiplication<<endl;

}
void subtraction(int num1,int num2)
{
int suntraction=num1-num2;
cout<<"Subtraction is:"<<subtraction<<endl;
}






