#include<iostream>
using namespace std;
class demo{
    int a;
    public:
    void getdata(){
        cout<<"Enter a number:-"<<endl;
        cin>>a;
    }
    void putdata(){
        cout<<"a="<<a<<endl;
    }
    demo operator+ (demo bb){
    demo cc;
    cc.a=a+bb.a;
    return cc;

}
};
int main(){
    demo aa,bb,cc;
    aa.getdata();
    bb.getdata();
    // cc.getdata();
    cc=aa+bb;
    aa.putdata();
    bb.putdata();
    cc.putdata();
    return 0;




}
// #include<iostream>
// using namespace std;

// class demo {
//     int a;
// public:
//     void getdata() {
//         cout << "Enter a number:-" << endl;
//         cin >> a;
//     }
//     void putdata() {
//         cout << "a=" << a << endl;
//     }
    
//     // Overloading + operator as a member function
//     demo operator+ (const demo& bb) {
//         demo temp;
//         temp.a = a + bb.a;
//         return temp;
//     }
// };

// int main() {
//     demo aa, bb, cc;
//     aa.getdata();
//     bb.getdata();
//     cc = aa + bb; // Using overloaded operator+
//     cc.putdata();
//     return 0;
// }
