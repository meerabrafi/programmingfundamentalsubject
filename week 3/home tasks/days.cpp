#include<iostream>
using namespace std;
main(){
string name;
float target_weight_loss;
float days;
cout<<"Enter the name of person:";
cin>>name;
cout<<"Enter the target weight to loss in kilograms:";
cin>>target_weight_loss;
days=target_weight_loss*15;
cout<<name<<" will need "<<days<<" days "<<"to loose "<<target_weight_loss<<" kg"<<"weight by following the doctors suggestions"<<endl;

}