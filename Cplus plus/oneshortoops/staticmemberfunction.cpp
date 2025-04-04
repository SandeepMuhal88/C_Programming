#include<iostream>
using namespace std;
class demo{
    int x;
    static int y;
    public:
    void getdata(int);
    void putdata();
    static void xyz(){
        cout<<"\ny="<<y;
    }
};int demo:: y;
void demo::getdata(int a){
    x=a;
    y=y+1;
}
void demo::putdata(){
    cout<<"\nx="<<x<<"\ny="<<y<<endl;

}
int main(){
    demo aa;
    aa.getdata(98);
    aa.putdata();
    demo::xyz();
    return 0;
}
