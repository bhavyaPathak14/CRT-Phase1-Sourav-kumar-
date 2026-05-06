#include <iostream>
using namespace std;
class student{
    //Data members
    public:
    string name;
    int rollno;
    //Default Constructor
    student(){
        name="riya";
        rollno=10;
    }
    //print 
    void show(){
        cout<<"Name: "<<name<<endl;
        cout<<"RollNo: "<<rollno<<endl;
        cout<<"Default constructor is called "<<endl;
    }
};
int main(){
    student s1;
    s1.show();
     return 0;
}