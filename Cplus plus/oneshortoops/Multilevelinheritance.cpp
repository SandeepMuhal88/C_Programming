#include<iostream>
using namespace std;
class A{
    protected:
    int roll;
    public:
    void getrooll(){
        cout<<"Enter the rollno."<<endl;
        cin>>roll;
    }
    void putroll(){
        cout<<"Rool="<<roll<<endl;
    }
};
class B: public A{
    protected:
    int sub1,sub2;
    public:
    void getsub(){
        cout<<"Enter the mrks of two subject:-"<<endl;
        cin>>sub1>>sub2;
    }
    void putsub(){
        cout<<"Sub1="<<sub1<<" Sub2="<<sub2<<endl;
    }
};
class C:public B{
    protected:
    int sptm;
    public:
    void getsptm(){
        cout<<"Enter the marks os sport="<<endl;
        cin>>sptm;
    }
    void totalmarks(){
        cout<<"Sptmaks="<<sptm<<endl;
        putroll();
        putsub();
        cout<<"Toatal marks="<<sub1+sub2+sptm<<endl;
    }
};
int main(){
    C cc;
    cc.getrooll();
    cc.getsub();
    cc.getsptm();
    cc.totalmarks();
    return 0;
}