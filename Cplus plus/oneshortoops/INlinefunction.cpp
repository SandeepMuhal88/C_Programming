#include<iostream>
using namespace std;
inline int sqaure(int a){
    return a*a;

}
inline int cube(int a){
    return a*a*a;

}
int main(){
    int a;
    cout<<"Enter the a number:-"<<endl;
    cin>>a;
    cout<<"Sqare of a ="<<sqaure(a)<<endl;
    cout<<"Cube of a="<<cube(a)<<endl;
    return 0;
}