#include<iostream>
using namespace std;
int main(){
int value;
cout<<"PLease enter a value: ";
cin>>value;
while(value<=0){
cout<<"Error "<<value<<" is not a positive Number."<<endl;
cout<<"Please enter a positive number.";
cin>>value;
}
cout<<"Program Ends" <<endl;

}