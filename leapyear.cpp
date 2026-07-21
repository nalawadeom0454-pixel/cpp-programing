#include<iostream>

using namespace std;

int main()
{
int a;
cout<<"enter the year to check leap year or not\n";
cin>>a;
if(a%4==0)
{
cout<<a<<"is leap year";
}
else{
cout<<a<<"is not leap year";
}
}