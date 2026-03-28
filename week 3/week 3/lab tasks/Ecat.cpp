#include<iostream>
using namespace std;
main(){

string name;
cout <<"Enter the student's name:";
cin>>name;
float marks1;
cout<<"Enter the matriculation marks:";
cin>>marks1;
float marks2;
cout<<"Enter the intermediate marks :";
cin>>marks2;
float marks3;
cout<<"Enter the Ecat marks:";
cin>>marks3;
float aggregate=(marks1/1100)*10 +(marks2/555)*40+(marks3/400)*50;
cout<<aggregate;

}
 