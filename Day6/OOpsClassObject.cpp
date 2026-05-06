#include <iostream>
using namespace std;
class student{
    private:
int regno =100;
    public:
    //data member 
    string name ;
    int rollno;


    //member function 
    void display(){
        cout<< "Name : "<<name<<endl;
        cout<<"Roll No:"<< rollno<<endl;
        cout<<"Registration No: "<< regno<< endl;
        regno++;
    }
};

int main(){
student s1;
s1.name = "Bhavya";
s1.rollno = 18;
s1.display();

    return 0;
}