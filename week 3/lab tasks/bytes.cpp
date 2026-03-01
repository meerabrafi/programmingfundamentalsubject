#include<iostream>
using namespace std;
main(){
float MB;
float KB;
float bytes;
float bits;
cout<<"Enter the size in megabytes:";
cin>>MB;
KB=1024*MB;
bytes=1024*KB;
bits=8*bytes;
cout<<"MB"<<MB<<" is equal to bits:"<<bits<<endl;

}