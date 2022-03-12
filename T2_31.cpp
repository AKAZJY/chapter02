/*
FileName:T2_31.cpp
Author:zjy
E-maile:211435670@qq.com
Time:Mar 12,2022
*/
#include <iostream>

using namespace std;

int main()
{
    int tot,price,ave,fee,toll;
    cout << "Input the total number of miles:" ;
    cin >>tot;
    cout << "Input the price of a gallon of gas:" ;
    cin >>price;
    cout << "Input the average number of miles per gallon:" ;
    cin >>ave;
    cout << "Input the daily parking fee:" ;
    cin >>fee;
    cout << "Input the daily toll:" ;
    cin >>toll;
    cout <<"The daily cost of driving is :"<<(tot*price)/ave+fee+toll<<endl;
    return 0;
}
