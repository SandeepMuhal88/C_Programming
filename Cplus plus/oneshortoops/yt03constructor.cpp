#include<iostream>
using namespace std;
class customer{
    private:
    string name;
    int account_number;
    int balance;
    
    public:
    // Defult constructor
    customer(){
        // cout<<"Hello contructor\n";
        name="Sandeep MUhal";
        account_number=153;
        balance=2011;
    }
    // Perameterized constructor
    customer(string a,int b,int c){
        name =a;
        account_number=b;
        balance=c;
    }

    void display(){
        cout<<name<<" "<<account_number<<" "<<balance<<" "<<endl;
    }


};
int main(){
    customer A1;
    customer A2("SANdeep",67,8523);
    A1.display();
    A2.display();
}