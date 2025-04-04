#include<iostream>
using namespace std;
class Employee{
    // private:
    public:
    string name;
    int ID, account_number;
    float salary;
    // public:
    // void setdate();
    // void getdata();

};
// void Employee::  setdate(void){
//     cout<<"Enter the details of Employee:-"<<endl;
//     cout<<"Name,ID Account_number, salary !!"<<endl;
//     cin>>name>>ID>>account_number>>salary;
// }
// void Employee:: getdata(void){
    
// }
int main(){
    
    Employee *E=new Employee;
    cin>>E->ID;
    cout<<E->ID<<endl;
    E->name="Sandeep MUhal";
    cout<<E->name<<endl;


}