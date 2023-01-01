#include<iostream>
using namespace std;
void eligible(int age);
main()
{
int age;
while(true){
cout<<"age is:"<<endl;
cin>>age;
eligible(age);}
}
void eligible(int age)
{
if(age>18)
 {
  cout<<"Eligible candidate";
 }
if(age==18)
 {
 cout<<"eligible candidate";
 }
if(age<18){
cout<<"Not eligible candidate";}
}