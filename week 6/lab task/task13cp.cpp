#include<iostream>
using namespace std;
main()
{
    int n,i;
    cout<<"Enter the number of chords:";
    cin>>n;
    string chord[100];
      cout<<"Enter "<<n<<" elements of the array "<<endl;
    for(i=0;i<n;i++)
    {
      cin>>chord[i];
    }
     cout<<"Jazzified chords are : [";
     for(i=0;i<n;i++){
    if((chord[i].back())!='7')
    {
       cout<<chord[i]<<"7"<<" , "; 
    }
    else
    {
        cout<<chord[i]<<" , ";
    }}
  cout<<"]";
}