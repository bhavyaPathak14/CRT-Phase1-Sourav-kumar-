#include<iostream>
using namespace std;

class employee{
    public:
    static int reg_no;
    static void show(){
        cout<<"Employee reg no is: "<< reg_no<<endl;
    }
};
int employee ::reg_no =100;

int main(){
employee E1;
employee E2;
employee E3;
employee E4;
employee::show();
return 0;
}