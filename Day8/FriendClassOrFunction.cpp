#include<iostream>
using namespace std;

class area{
    private:
    int length;
    int breadth;
    public:
    void setSides(int l, int w){
        length= l;
        breadth =w ;
    }
friend void showarea(area a);
    
};
void showarea(area b){
    int area = b.length * b.breadth;
    cout<<"Area is:"<<area<<endl;
}

int main(){

    area a;
    a.setSides(5,10);
    showarea(a);
    return 0;
}