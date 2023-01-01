#include<iostream>
using namespace std;
void Amount(int num1,string day,string day2);
main()
{
int num1;
cout<<"Total Amount is:";
cin>>num1;
string day;
cout<<"Enter day is:";
cin>>day;
string day2;
cout<<"Enter day 2 is:";
cin>>day2;
Amount(num1,day,day2);

}
void Amount(int num,string day,string day2)
{
if(day==day2)
{
 cout<<"10% discount offer"<<endl;
 int dis=num*0.10;
 int dis2=num-dis;
 cout<<"Total payable amount with discount offer:"<<dis2;
}
if(day!=day2)
{
 cout<<"Total payable amount without discount offer:"<<num;
}
}




