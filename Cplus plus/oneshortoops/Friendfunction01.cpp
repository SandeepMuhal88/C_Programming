#include<iostream>
using namespace std;
class Multiply{
    int a;
    int b;
    public:
    void getdata();
    friend float multi(Multiply);
};
void Multiply:: getdata(){
    cout<<"Enter two number:-"<<endl;
    cin>>a>>b;
}
float multi(Multiply k){
    return (k.a*k.b);

}
int main(){
    Multiply k;
    k.getdata();
    cout<<"Multiple;- "<<multi(k)<<endl;
    return 0;
}