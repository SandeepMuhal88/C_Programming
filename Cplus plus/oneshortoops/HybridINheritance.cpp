#include<iostream>
using namespace std;
class A{
    public:
    void putdata(){
        cout<<"Inherit classA"<<endl;
    }
};
class B:public A{
    public:
    void putprint(){
        cout<<"Inherit Class B"<<endl;
    }
};
class C{
    public:
    void message(){
        cout<<"Inherit class C"<<endl;
    }

};
class D: public B,public C{
    public:
    void printd(){
        cout<<"Inheritance classD:"<<endl;
    }
};
int main(){
    D bb;
    bb.message();
    bb.printd();
    bb.putdata();
    bb.putprint();
    return 0;
}