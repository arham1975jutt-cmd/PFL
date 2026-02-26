#include<iostream>
using namespace std;
main(){ 
int charge,time,current;

cout<<"Enter the charge Q in coulombs :";
cin>>charge;

cout<<"Enter the time in secounds:";
cin>>time;

current =charge/time;
cout<<"the current T is :"<<current<<"Amperes";
}