#include<iostream>
using namespace std;
int main(){
int n;
cout<<"How many numbers you want to enter? ";
cin>>n;
int numbers[n];
for(int i=0; i<n; i=i+1){
cout<<"Enter number :"<<i+1<<" ";
cin>>numbers[i];
}
cout<<"You have entered these numbers :"<<endl;
for(int i=0; i<n; i=i+1){
    cout<<numbers[i]<<" ";
}

       }
