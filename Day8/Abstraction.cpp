#include<iostream>
using namespace std;
class ATM{
private:
int balance;
public:
ATM (int balance ){
    this ->balance=balance;
}
void Withdraw(int amount){
if(amount> balance){
    cout<<"Insufficient balance: "<<endl;
}
else{
    balance -= amount;
    cout << "Amount Withdraw: "<< amount<< endl;
}
}
void showbalance(){
    cout<<"Current Balance: "<< balance<<endl;
}
};
int main(){
    ATM a(5000);
    a.Withdraw(500);
    a.showbalance();
    return 0;
}