#include<iostream>
using namespace std;
int count=0;
class demo{
    public:
    demo(){
        count++;
        cout<<"Constructor is construct is value:-"<<count<<endl;
    }
    ~demo(){
        cout<<"Destructor is destroyed the value:-"<<count<<endl;
        count--;
    }
};
int main(){
    demo a1,a2,a3;
    {
        demo a4;
    }
    return 0;
}