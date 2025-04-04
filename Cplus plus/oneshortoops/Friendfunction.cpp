#include<iostream>
using namespace std;
class Addition{
    int a,b;
    public:
    void getdata();
    friend int sum(Addition);
};
void Addition ::getdata(){
    cout<<"\n Enter two number:- ";
    cin>>a>>b;

}
int sum(Addition obj){
    return (obj.a+obj.b);
}
int main(){
    Addition obj;
    obj.getdata();
    cout<<"Sum of two numbers:-"<<sum(obj)<<"\n";


}