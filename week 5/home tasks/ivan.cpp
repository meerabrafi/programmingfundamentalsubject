#include<iostream>
using namespace std;
main()
{
    int money,year,spendmoney=0,age;
    cout<<"Enter money :";
    cin>>money;
    cout<<"Enter year:";
    cin>>year;
    age=18;
    for(int y=1800;y<=year;y++)
    {
    if(y%2==0)
    {
      spendmoney=spendmoney+12000;
    }
    else
    {
        spendmoney+=12000+50*age;
    }
    age++;
    }
    if(spendmoney<=money)
    {
        int remaining=money-spendmoney;
        cout<<"Money is enough"<<remaining;}
    else
    {
        int sufficient=spendmoney-money;
        cout<<"Money is not enough !"<<sufficient;
    }
} 