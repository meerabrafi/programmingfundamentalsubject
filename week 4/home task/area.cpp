#include<iostream>
using namespace std;
int main(){
string figure;
cout<<"Enter figure name:";
cin>>figure;
float area;
float s,l,w,b,r;
if(figure=="square"){
cin>>s;
area=s*s;
cout<<"area of square "<<area;
}
if (figure=="rectangle"){
cin>>l;
cin>>w;
area=l*w;
cout<<"area of rectangle "<<area;
}
if (figure=="triangle"){
cin>>l;
cin>>b;
area=0.5*l*b;
cout<<"area of triangle "<<area;
}
if (figure=="circle"){
cin>>r;
area=3.14*r*r;
cout<<"area of circle "<<area;

}
}


