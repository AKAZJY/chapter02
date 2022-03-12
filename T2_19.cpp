/*
FileName:T2_19.cpp
Author:zjy
E-maile:211435670@qq.com
Time:Mar 12,2022
*/
#include <iostream>

using namespace std;

int main()
{
    int a,b,c,tem;
    cout << "Input three different integers:" ;
    cin>>a>>b>>c;
    cout<<"Sum is "<<a+b+c<<endl;
    cout<<"Average is "<<(a+b+c)/3<<endl;
    cout<<"Product is "<<a*b*c<<endl;
    if(a>b) {tem=b;b=a;a=tem;}
    if(a>c) {tem=c;c=a;a=tem;}
    if(b>c) {tem=c;c=b;b=tem;}
    cout<<"Smallest is "<<a<<endl;
    cout<<"Largest is "<<c<<endl;
    return 0;
}
