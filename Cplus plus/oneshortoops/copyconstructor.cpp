#include<iostream>
using namespace std;
class demo{
    int x,y;
    public:
    demo(){
        x=92;
        y=23;
    }
     demo(int a,int b){
        x=a;
        y=b;
     }
     demo(demo &w){
        x=w.x;
        y=w.y;
     }
    void display(){
        cout<<x<<" "<<y<<endl;

    }
};
int main(){
    demo a1;
    demo a2(86,34);
    a1.display();
    a2.display();
    demo a3(a2);
    a3.display();
    return 0;
}
  