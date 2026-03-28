#include<iostream>
using namespace std;
main(){
int minutes;
int FPS;
int Total_frames;
cout<<"Number of minutes:";
cin>>minutes;
cout<<"frames_per_second:";
cin>>FPS;
Total_frames=(minutes*60)*FPS;
cout<<"Total number of frames:"<<Total_frames<<endl;

}