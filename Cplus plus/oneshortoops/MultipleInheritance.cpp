#include<iostream>
using namespace std;
class A{
    protected:
    int a;
    public:
    void inputA(){
        cout<<"Enter a number:-"<<endl;
        cin>>a;
    }
};
class B{
    protected:
    int b;
    public:
    void inputB(){
        cout<<"Enter a number:-"<<endl;
        cin>>b;
    }
};
class C: public A,public B{
    public:
    void getdata(){
        cout<<"Multiply="<<a*b<<endl;
    }
};
int main(){
    C cc;
    cc.inputA();
    cc.inputB();
    cc.getdata();
    return 0;
}