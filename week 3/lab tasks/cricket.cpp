#include<iostream>
using namespace std;
main(){
int wins;
int draws;
int losses;
int total_points;
cout<<"Enter the number of wins:";
cin>>wins;
cout<<"Enter the number of draws:";
cin>>draws;
cout<<"Enter the number of losses:";
cin>>losses;
total_points=(wins*3)+(draws*1)+(losses*0);
cout<<"Pakistan has obtained " << total_points <<" points in Asia Cup Tournament "<<endl;

}
