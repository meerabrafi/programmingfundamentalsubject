#include<iostream>
using namespace std;
main(){
float vegetable;
float fruit;
int total_vegetables;
int total_fruits;
float rupees;
cout<<"Enter vegetable price per kilogram (in coins):";
cin>>vegetable;
cout<<"Enter fruit price per kilogram(in coins):";
cin>>fruit;
cout<<"Enter total kilograms of vegetables:";
cin>>total_vegetables;
cout<<"Enter total kilograms of fruits:";
cin>>total_fruits;
rupees=(vegetable*total_vegetables)+(fruit*total_fruits)/1.94;
cout<<"total earing in rupees"<<rupees<<endl;
}






