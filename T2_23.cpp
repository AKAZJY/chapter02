/*
FileName:T2_23.cpp
Author:zjy
E-maile:211435670@qq.com
Time:Mar 12,2022
*/
#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,e,tem;
    cin>>a>>b>>c>>d>>e;
    if(a>b) {tem=b;b=a;a=tem;}
    if(a>c) {tem=c;c=a;a=tem;}
    if(a>d) {tem=d;d=a;a=tem;}
    if(a>e) {tem=e;e=a;a=tem;}
    if(b>c) {tem=c;c=b;b=tem;}
    if(b>d) {tem=d;d=b;b=tem;}
    if(b>e) {tem=e;e=b;b=tem;}
    if(c>d) {tem=d;d=c;c=tem;}
    if(c>e) {tem=e;e=c;c=tem;}
    if(d>e) {tem=e;e=d;d=tem;}
    cout << "他们中的最大值为：" <<e<< endl;
    cout << "他们中的最小值为：" <<a<< endl;
    return 0;
}
