#include<iostream>
using namespace std;
main(){
int current_population;
int monthly_birth;
int decades=3;
int months_in_3_decades=3*10*12;
int future_population;
cout<<"Enter the current world population:";
cin>>current_population;
cout<<"Enter the monthly birth rate(number of births per month):";
cin>>monthly_birth;
future_population=current_population+(monthly_birth*months_in_3_decades);
cout<<"population in three decades will be:"<<future_population<<endl;

}



