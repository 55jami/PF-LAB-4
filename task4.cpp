#include<iostream>
using namespace std;
void diff(int num);
main()
{
int a;
while(true){
cout<<"Enter num is:"<<endl;
cin>>a;
diff(a);}
}
void diff(int num)
{
 if(num%2==0)
 {
 cout<<"Number is even";
 }
 if(num%2!=0)
 {
 cout<<"Number is odd";
 }
}