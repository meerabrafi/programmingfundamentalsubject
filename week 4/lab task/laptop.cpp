#include<iostream>
using namespace std;
int main(){
int salary=10000;
int laptopprice=50000;
int months=6;
int advancepermonth= salary*0.5;
int advancein6months=advancepermonth*6;
if (advancein6months>=laptopprice){
cout<<"You can buy the laptop!";
}
else{
    "You cannot buy the laptop!";
}
int No_of_months=laptopprice/advancepermonth;
cout<<"Months required to buy laptop:"<<No_of_months<<endl;

}