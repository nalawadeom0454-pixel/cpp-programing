#include<iostream>

using namespace std;

int main()
{
int a,reversedNum = 0,remainder;
cout <<"enter an integer:";
cin >> a;
while (a!=0)
{remainder = a%10;
    reversedNum = reversedNum *10 +remainder;
    a/=10;
}
cout<<"reversed Number: "<< reversedNum<<std::endl;
return 0;

}