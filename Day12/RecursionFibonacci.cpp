#include<iostream>
using namespace std;
int fib(int x){
    if(x == 1 || x== 2){
return 1;
    }
    else if(x == 0){
return 0;
    }
}

int main(){
int n ;
cout <<" Fibonacci of number: "<<n<<"is"<< fib(n)<<endl;
cin>>n;
}
