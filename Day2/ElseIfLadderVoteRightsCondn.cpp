#include <iostream>
using namespace std;
int main(){
 int age ;
 cout<<"Enter Age :";
 cin>>age;
 if(age>=18){
    if(age>99){
        cout<<"This age comes under centuric catagory and eligible to vote.";
    }
    else if(age<99){
        cout<<"This age is eligible to vote.";
    }
 }    
 else if(age<18){
    if(age>0){
        cout<<"This age is not eligible to vote.";
    }
else if(age<0){
    cout<<"This age is invalid.";
}
 }
 return 0;
}
