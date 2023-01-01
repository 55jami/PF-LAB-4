#include<iostream>
using namespace std;
void greaterNum(int num1,int num2);
main()
{
int a,b;
while(true){
cout<<"Enter fisrt num is:";
cin>>a;
cout<<"Enter second num is:";
cin>>b;
greaterNum(a,b);
}
}
void greaterNum(int num1,int num2)
{
if(num1>num2)
 {
cout<<"Number 1 is greater";
}
if(num2>num1)
{
cout<<"Number 2 is greater";
}
}