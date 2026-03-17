#include<iostream>
using namespace std;
main()
{
    int n1,n2,gcd;
    cout<<"enter first number: ";
    cin>>n1;
    cout<<"enter second number: ";
    cin>>n2;
    int a=n1, b=n2;
    while(b!=0){
        int temp=b;
        b=a%b;
        a=temp;
    }
    gcd=a;

    int lcm=(n1*n2)/gcd;
    cout<<"GCD of "<<n1<<" and "<<n2<<" is "<<gcd<<endl;
    cout<<"LCM of "<<n1<<" and "<<n2<<" is "<<lcm<<endl;
}