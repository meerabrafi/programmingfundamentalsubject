#include<iostream>
using namespace std;
int main(){
int temperature1;
int temperature2;
int difference;
cout<<"Enter the temperature of City 1:";
cin>>temperature1;
cout<<"Enter the temperature of City 2:";
cin>>temperature2;
if (temperature1-temperature2<=10){
    cout<<"Program Ends"<<endl;
}
else{
    cout<<"Differnce is too Big"<<endl;
    cout<<"program ends ";
}
}
