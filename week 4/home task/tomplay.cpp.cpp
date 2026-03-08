#include<Iostream>
using namespace std;
int main(){
int holidays;
int normssleepingtime;
cout<<"Enter the number of holidays:";
cin>>holidays;
int working_days=365-holidays;
int playtime=(working_days*63)+(holidays*127);
int difference=30000-playtime;
int hours=difference/60;
int minutes=difference%60;
if(normssleepingtime>=playtime){
cout<<"Toms sleeps well";
}
cout<<hours<<" hours and "<<minutes<<" minutes"<<"less for play"<<endl;
if (normssleepingtime<=playtime){
cout<<"Tom will run away"<<endl;
}
cout<<hours<<" hours and "<<minutes<<" minutes"<<"for play"<<endl;
}