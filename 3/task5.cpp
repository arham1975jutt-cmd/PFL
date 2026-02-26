#include<iostream>
using namespace std;
main(){ 
float matric_marks,inter_marks,ECAT_marks,aggregate,a,b,c;
string name;

cout<<"Enter the name of student :";
cin>>name;

cout<<"Enter the marks of student in matric :";
cin>>matric_marks;

cout<<"Enter the marks of student in inter ";
cin>>inter_marks;

cout<<"Enter the marks of student in ECAT :";
cin>>ECAT_marks;

a=matric_marks*(10/1100);
b=inter_marks*(40/550);
c=ECAT_marks*(50/400);

aggregate=a+b+c;

cout<<"aggregate of "<<name<<"is"<<aggregate;



}