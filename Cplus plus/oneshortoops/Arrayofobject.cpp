// Array of Object ........
#include<iostream>
using namespace std;
class Array{
    int a,b;
    public:
    void getdata();
    void putdata();

};
void Array:: getdata(){
    cout<<"\n Enter two number:-";
    cin>>a>>b;

}
void Array::putdata(){
    cout<<"\n a="<<a<<"\tb="<<b;
}
int main(){
    Array arr[5];
    for(int i=0;i<5;i++){
        arr[i].getdata();
    }
    for(int i=0;i<5;i++){
        arr[i].putdata();
    }
}