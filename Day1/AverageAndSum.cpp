#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout << "Enter 3 number: ";
    cin >>a>>b>>c;
    double average;
    int sum;
    average = (a+b+c)/3;
    sum = a+b+c;
    cout << "Average of three number is :"<< average<< endl;
    cout << "Sum of three number : "<< sum << endl;
    return 0 ;
}