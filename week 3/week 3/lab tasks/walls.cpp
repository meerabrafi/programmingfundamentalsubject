#include<iostream>
using namespace std;
main(){
float Square_meters;
float Width;
float Height;
float Area;
float Number_of_walls;
cout<<"Number of square meter you can paint:";
cin>>Square_meters;
cout<<"Width of a single wall (in meters):";
cin>>Width;
cout<<"Height of a single wall (in meters):";
cin>>Height;
Area=Width*Height;
Number_of_walls=Square_meters/Area;
cout<<"Number of walls you can paint:"<<Number_of_walls<<endl;

}




