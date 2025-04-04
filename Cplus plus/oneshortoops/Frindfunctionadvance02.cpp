#include<iostream>
using namespace std;
class B;
class A{
    int a;
    public:
    void inputA(){
        cout<<"Enter the value of a:-"<<endl;
        cin>>a;  
    }
    friend void max(A,B);

};
class B{
    int b;
    public:
    void inputB(){
        cout<<"Enter the value of B:-"<<endl;
        cin>>b;

    }
    friend void max(A,B);
};
void max(A aa,B bb){
    if(aa.a>bb.b){
        cout<<"Max="<<aa.a<<endl;
    }
    else{
        cout<<"Max="<<bb.b<<endl;
    }
}
int main(){
    A aa; B bb;
    aa.inputA();
    bb.inputB();
    max(aa,bb);

}