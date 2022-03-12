/*
FileName:T2_30.cpp
Author:zjy
E-maile:211435670@qq.com
Time:Mar 12,2022
*/
#include<iostream>

using namespace std;

int main()
{
double weight,high,BMI;
cin>>weight>>high;
BMI=weight*10000/(high*high);
cout<<BMI<<endl;
cout<<"BMI VALUES"<<endl;
cout<<"Underweight: less than 18.5"<<endl;
cout<<"Normal:      between 18.5 and 24.9"<<endl;
cout<<"Overweight:  between 25 and 29.9   "<<endl;
cout<<"obese:       30 or greater"<<endl;
return 0;
}
