#include<iostream>
using namespace std;
void ifPass(int marks);
main()
{
while(true)
	{
	int number;
	cout<<"Number is:";
	cin>>number;
	ifPass(number);
	}
}
void ifPass(int marks)
{

if(marks>50)
	{
	 cout<<"U have pass frist quiz of pf:";
	}
if(marks==50)
	{
	 cout<<"Numbers are 50:";
	}
if(marks<50)
	{
	 cout<<"U are luckily failed in this subject:";
	}
}