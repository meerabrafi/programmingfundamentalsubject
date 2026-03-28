#include<iostream>
using namespace std;
main()
{
    string word;
    cout<<"Enter a string : ";
    cin>>word;
    int lastindex=word.length();
    cout<<"Reverse string : ";
    for(int i=lastindex;i>=0;i--)
    {
        cout<<word[i];
    }
}