#include<iostream>
using namespace std;
int main(){
char ch;
cout<<"Enter any character in lower case:";
cin>>ch;
if(ch>='0'&& ch<='9'){
cout<<"It is a number"<<endl;
}
if (ch=='a'){ 
cout<<"It is vowel";
}
if (ch=='e'){
cout<<"It is a vowel";
}
if (ch=='i'){
cout<<"It is a vowel";
}
if (ch=='o'){
cout<<"It is a vowel";
}
if(ch=='u'){
cout<<"It is a vowel";
}
else if (ch>='a' && ch<='z'){
cout<<"It is consonant"<<endl;

}
}


