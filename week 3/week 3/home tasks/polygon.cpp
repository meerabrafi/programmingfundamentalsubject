#include<iostream>
using namespace std;
main(){
int polygon_sides;
int sum_angles;
cout<<"Enter the number of sides of polygon:";
cin>>polygon_sides;
sum_angles=(polygon_sides-2)*180;
cout<<"The total sum of internal angles of a "<<polygon_sides<<" sided polygon is:"<<sum_angles<<" degrees"<<endl;

}


