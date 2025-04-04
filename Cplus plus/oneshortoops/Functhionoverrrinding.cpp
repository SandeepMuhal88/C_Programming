#include<iostream>
using namespace std;
class A{
    public:
    void display(){
        cout<<"\nBase class"<<endl;
    }
};
class B: public A{

    public:
    void display(){
        cout<<"\nDerived class";
    }
};
int main(){
    B aa;
    aa.display();
    aa.A::display();
    return 0;
}
