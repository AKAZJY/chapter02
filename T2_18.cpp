/*
FileName:T2_18.cpp
Author:zjy
E-maile:211435670@qq.com
Time:Mar 12,2022
*/
#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    if(a>b) cout<<a<<" is large."<<endl;
    else if(a<b) cout<<b<<" is large."<<endl;
    else if(a=b) cout<<"These numbers are equal."<<endl;
    return 0;
}
