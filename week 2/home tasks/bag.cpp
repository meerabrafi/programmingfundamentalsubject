#include<iostream>
using namespace std;
main(){
float pounds;
float bagcost;
float area;
float cost1;
float cost2;
cout<<"Enter size of the fertilizer bag in pounds:";
cin>>pounds;
cout<<"Enter the cost of the bag:$";
cin>>bagcost;
cout<<"Enter the area in square feet that can be covered by the bag:";
cin>>area;
cost1=bagcost/pounds;
cout<<"cost of the fertilizer per pounds is:$"<<cost1<<endl;
cost2=bagcost/area;
cout<<"cost of the fertilizing per square foot:$"<<cost2<<endl;


}