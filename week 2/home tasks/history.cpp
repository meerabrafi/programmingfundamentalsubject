#include<iostream>
using namespace std;
main(){
int age;
int moves;
int Average_years;
cout<<"Enter the person's age:";
cin>>age;
cout<<"Enter the number of times they have moved:";
cin>>moves;
Average_years=age/(moves+1);
cout<<"Average number of years lived in the same house:"<<Average_years<<endl;

}