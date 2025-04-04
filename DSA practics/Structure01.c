#include<stdio.h>
#include<string.h>
typedef struct  student{
    int roll;
    float cgpa;
    char name[100];
}stu;
int main(){
    stu s1;
    s1.roll=90;
    s1.cgpa=9.9;
    strcpy(s1.name,"Sandeep Muhal");
    printf("MY name is:-  %s\n",s1.name);
    return 0;
}