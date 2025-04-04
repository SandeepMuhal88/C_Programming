#include<iostream>
using namespace std;
class demo{
    int x,y;
    string z;
    public:
    demo(){
        x=67;
        z= "sandeep don";
        y=700;
    }
    demo(string a,int b,int c){
        x=b;
        y=c;
        z=a;
    }
    demo(string a,int c){
        z=a;
        y=c;
    }
    void display(){
        cout<<x<<" "<<y<<" "<<z<<endl;
    }
};
int main(){
    demo a1;
    demo a2("Sandeep",89,2000);
    demo a3("sandeep muhal",78,3000);
    a1.display();
    a2.display();
    a3.display();
    return 0;
}