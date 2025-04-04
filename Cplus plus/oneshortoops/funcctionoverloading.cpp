#include<iostream>
using namespace std;
void Add(int a,int b){
    cout<<"Addintion:-"<<a+b<<endl;
}
void Add(int a,int b, int c){
    cout<<"Addition="<<a+b+c<<endl;
}
void Add(int a,double b){
    cout<<"Addition="<<a+b<<endl;
}
int main(){
    Add(23,35);
    Add(8,10.0);
    Add(34,2,4);
 
    return 0;
}