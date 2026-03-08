#include<iostream>
using namespace std;
int main(){
int redrose,whiterose,tulips;
float originalprice;
float price_after_discount;
float discount;
cout<<"Enter the number of red rose:";
cin>>redrose;
cout<<"Enter the number of white rose:";
cin>>whiterose;
cout<<"Enter the number of tulips:";
cin>>tulips;
originalprice=(redrose*2)+(whiterose*4.10)+(tulips*2.5);
if (originalprice>200){
    discount=originalprice*20/100;
}
price_after_discount=originalprice-discount;
cout<<"Original Price "<<originalprice<<endl;
cout<<"Price after discount "<<price_after_discount<<endl;



}