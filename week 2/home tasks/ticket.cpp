#include<iostream>
using namespace std;
main(){
string Movie;
float adult;
float child;
float adult1;
float child1;
float percentage;
float Total;
float Donation;
float remaining;
cout<<"Enter the Movie name:";
cin>>Movie;
cout<<"Enter the adult ticket price:$";
cin>>adult;
cout<<"Enter the child ticket price:$";
cin>>child;
cout<<"Enter the number of adult tickets sold:";
cin>>adult1;
cout<<"Enter the number of child tickets sold:";
cin>>child1;
cout<<"Enter the percentage of the amount to be denoted to charity:";
cin>>percentage;
cout<<"--------------------------------<<endl;
Total=(adult*adult1)+(child*child1);
cout<<"Movie:"<<Movie<<endl;
cout<<"Total amount generated from tickets sale:$"<<Total<<endl;
Donation=Total*(percentage/100);
cout<<"Donation to charity:$"<<Donation<<endl;
remaining=Total-Donation;
cout<<"Remaining amount after donation:$"<<remaining<<endl;
}








