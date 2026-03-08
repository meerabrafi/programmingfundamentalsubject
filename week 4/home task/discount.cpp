#include<iostream>
using namespace std;
int main(){
string country;
int ticket_price;
int discount;
int finalprice;
cout<<"Enter the name of country:";
cin>>country;
cout<<"Enter the ticket price:";
cin>>ticket_price;
if(country == "ireland"){
discount=ticket_price*0.10;
}
else{
discount=ticket_price*0.05;
}
finalprice=ticket_price-discount;
cout<<"Discounted price:"<<finalprice<<endl;
}



