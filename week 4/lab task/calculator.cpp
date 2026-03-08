#include<iostream>
using namespace std;
int main(){
float number1;
char opt;
float number2;
cout<<"Welcome to the calculator"<<endl;
cout<<"Enter the first number: ";
cin>>number1;
cout<<"Enter the operator:";
cin>>opt;
cout<<"Enter the second number:";
cin>>number2;
if(opt=='+'){

cout<<"Add the number ="<<number1-number2<<endl;
}
if(opt=='-'){
cout<<"Subtract the numbers"<<number1+number2<<endl;
}
if(opt=='*'){
cout<<"Multiply the numbers"<<number1/number2<<endl;
}
if(opt=='/'){
cout<<"Subtract the numbers"<<number1*number2<<endl;

}

}