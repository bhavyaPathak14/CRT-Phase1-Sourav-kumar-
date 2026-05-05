#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter a : ";
    cin>>a;
    cout<<"Enter b : ";
    cin>>b;
    char op;
    cout <<"enter operator:";
    cin>>op;
    switch(op){
        case '+':
            cout<<"a + b = "<<a+b<<endl;
            break;
        case '-':
            cout<<"a - b = "<<a-b<<endl;
            break;
        case '*':
            cout<<"a * b = "<<a*b<<endl;
            break;
        case '/':
            if(b!=0){
                cout<<"a / b = "<<a/b<<endl;
            }
            else{
                cout<<"Error: Division by zero is not allowed."<<endl;
            }
            break;
        default:
            cout<<"Invalid operator!"<<endl;
    }
}
