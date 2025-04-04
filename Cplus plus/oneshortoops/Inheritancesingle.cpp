#include<iostream>
using namespace std;
class A{
    protected:
    int x;
    public:
    void input(){
        cout<<"Enter the value of x="<<endl;
        cin>>x;
    }

};
class B:public A{
    private:
    int y;
    public:
    void inputB(){
        cout<<"Enter the value of y="<<endl;
        cin>>y;
    }
    void getdata(){
        cout<<"Addition:- "<<x+y<<endl;

    }
};
int main(){
    B bb;
    bb.input();
    bb.inputB();
    bb.getdata();
    return 0;
}