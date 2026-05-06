#include<iostream>
using namespace std;
class Cricketers{
    public:
    string name;
    int runs;
double avg;

// Parameterized Constructor 
Cricketers(string n,int r, double avg){
    name = n ;
    runs = r;
    this->avg=avg;
}
void show(){
    cout<<"Name : "<<name<<endl;
    cout<<"Runs : "<<runs<<endl;
    cout<<"Average: "<<avg<<endl;
}
};
int main(){
    Cricketers  c1("Sachin", 1000, 48.6);
    c1.show();
    return 0;
}