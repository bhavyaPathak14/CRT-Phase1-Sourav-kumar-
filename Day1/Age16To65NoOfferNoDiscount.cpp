#include <iostream>
using namespace std;
int main (){
    int age;
    cout << "Enter age : ";
    cin>> age;
    if (age >16 || age <65){
        cout<<"Sorry! their is no offer and no discount.";
    }
    else{
        cout << "Yes! you got an offer and discount";
    }
    return 0;
}