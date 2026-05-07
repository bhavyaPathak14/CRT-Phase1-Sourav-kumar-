#include <iostream>
using namespace std;
//Base Class 
class player{
    public: 
    string name;
    int age;
void setName (string n){
    name = n;
}
};
// Derived class 
class cricketer: public player{
    public:
    int run;

    void setruns(int r){
        run = r;
    }
    void show(){
cout<< "Name: "<< name<<endl;
cout<< "Runs: "<<run<<endl;
    }
};
    int main(){
        int r;
    cin >> r;
    cricketer c1;
    c1.setName("Virat");
    c1.setruns(r);
    c1.show();

    return 0;
    }

     
