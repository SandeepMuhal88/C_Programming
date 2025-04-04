#include<iostream>
using namespace std;
class Display{
    int x;
    int y;
    static int z;
    public:
    void getdata(int a,int b){
        x=a;
        y=b;
        z=z+1;
    }
    void putdata(){
        cout<<"\n x="<<x<<"\ty="<<y<<"\tz="<<z;

    }
};int Display:: z;
int main(){
    Display aa,bb;
    aa.getdata(85,6);
    aa.putdata();
    bb.getdata(63,47);
    bb.putdata();
    return 0;
}
