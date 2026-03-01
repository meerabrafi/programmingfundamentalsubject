#include<iostream>
using namespace std;
main(){
float voltage;
float current;
float power;
cout<<"Enter the value of voltage in volts:";
cin>>voltage;
cout<<"Enter the value of current in amperes:";
cin>>current;
power=voltage*current;
cout<<" The power is "<<power<<" watt"<<endl;
}
