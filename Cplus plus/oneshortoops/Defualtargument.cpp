#include<iostream>
using namespace std;
void add(int a=9,int b=12){
    cout<<"Addition="<<a+b<<endl;

}
int main(){
    add();
    add(89);
    add(54,8);
    return 0;
}