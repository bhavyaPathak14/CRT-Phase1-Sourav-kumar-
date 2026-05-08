#include <iostream>
using namespace std;
class car{
    private:
    int speed;
    public:
    car(){speed= 120; }

    void showspeed() const{
        //speed = 150; due to const function we have to comment 
        cout<<"Speed is : "<< speed<<endl;
    }
};
int main(){
car c1;
c1.showspeed();
return 0 ;
}