#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout <<"Three sides of triangle : ";
    cin>>a,b,c;
    if(a==b && b==c && c==a){
        cout <<"True ,the side of a triangle is equilateral. ";
    }
    else {
        cout << "False , the sides are not equilateral.";
    }
    return 0;
}