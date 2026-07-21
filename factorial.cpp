#include<iostream>

using namespace std;

int main()
{
int a;
cout<<"enter factorial of any number\n";
cin>>a;
int fact=1;
for(int i=1;i<=a;i++)
{
fact=fact*i;
}
cout<<"factorial of "<<a<<"is"<<fact;
}
