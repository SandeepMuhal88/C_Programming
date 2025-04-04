#include<iostream>
using namespace std;
class student{
    private:
    string name;
    int age,roll_number;
    string grade;

    public:
    void setdata();
    void getdata();
};
void student :: setdata(void){
    cout<<"Enter the Student details:-"<<endl;
    cout<<"Name,age,roll_number,grade"<<endl;
    cin>>name>>age>>roll_number>>grade;
}
void student ::getdata(void){
    cout<<"Name= "<<name<<" Age="<<age<<" roll_number= "<<roll_number<<" Grade= "<<grade<<endl;
}
int main(){
    student S;
    S.setdata();
    S.getdata();
    return 0;
}