#include<iostream>
using namespace std;
main(){
int discount;
int bill;
cout<<"Enter your bill:";
cin>>bill;
if (bill<=5000){
discount=bill-(bill*5/100);
}
if (bill>5000){
discount=bill-(bill*10/100);
}
cout<<"Your discounted bill is"<<discount<<endl;
}