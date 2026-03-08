#include<iostream>
using namespace std;
int main(){
string brother1;
int brother1age;
string brother2;
int brother2age;
string brother3;
int brother3age;
cout<<"Enter the first brother name:";
cin>>brother1;
cout<<"Enter the age of first brother:";
cin>>brother1age;
cout<<"Enter the second brother name:";
cin>>brother2;
cout<<"Enter the age of second brother:";
cin>>brother2age;
cout<<"Enter the third brother name:";
cin>>brother3;
cout<<"Enter the age of third brother:";
cin>>brother3age;
if (brother1age<brother2age && brother1age<brother3age){
cout<<"Yongest brother is:"<<brother1<<endl;
}
else if (brother2age<brother1age && brother2age<brother3age){
cout<<"Yongest brother is:"<<brother2<<endl;

}



}