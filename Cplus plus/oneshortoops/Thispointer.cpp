#include<iostream>
using namespace std;
class demo{
    int x,y;
    public:
    demo(){
        x=90;
        y=45;
    }
    demo(int x,int y){
        this->x=x;
        this->y=y;
    }
    void display(){
        cout<<x<<" "<<y<<endl;
    }
};
int main(){
    demo a1;
    demo a2(100,699);
    a1.display();
    a2.display();
    return 0;
}