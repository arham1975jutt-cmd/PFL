#include<iostream>
using namespace std;
main(){
int voltage, current, power;

cout<<"Enter the amount of current :";
cin>>current;

cout<<"Enter the voltage:";
cin>>voltage;

power=current*voltage;

cout<<"the power is:  "<<power<<"  watts";
}