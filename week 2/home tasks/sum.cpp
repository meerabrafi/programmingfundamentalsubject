#include<iostream>
using namespace std;
main(){
int num;
int sum;
cout<<"Enter a 4 digit number:";
cin>>num;
int d1=num/1000;
int d2=(num/100)%10;
int d3=(num/10)%10;
int d4=num%10;
sum=d1+d2+d3+d4;
cout<<"Sum of individual digits:"<<sum<<endl;

}