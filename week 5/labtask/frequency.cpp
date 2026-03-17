#include<iostream>
using namespace std;
int main(){
int number,digit,rem;
int count=0;
cout<<"Enter the number:";
cin>>number;
int original=number;
cout<<"Enter the digit:";
cin>>digit;
while(number>0){
rem=number%10;

if (rem==digit){
count=count +1;
}
number=number/10;
}
cout<<"Frequecy of "<<digit<<" in "<<original<<" is :"<<count<<endl;

}
