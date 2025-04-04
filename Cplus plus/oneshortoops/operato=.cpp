#include<iostream>
using namespace std;
class demo{
    int a;
    int b;
    public:
    void getdata(){
        cout<<"Enter two numbers:-"<<endl;
        cin>>a>>b;
    }
    void putdata(){
        cout<<"a="<<a<<" "<<"b="<<b<<endl;
    }
    void operator=(demo bb){
        a=bb.a;
        b=bb.a;
    }

};
int main(){
    demo aa,bb;
    bb.getdata();
    aa=bb;
    aa.putdata();
    bb.putdata();
    return 0;
}