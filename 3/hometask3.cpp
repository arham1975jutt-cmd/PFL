#include <iostream>
using namespace std;
main(){
int finalvelocity,initialvelocity,time,accelration ;

cout<<"Enter the initial velocity : " ;
cin >>initialvelocity;

cout<<"Enter the time : ";
cin >>time;

cout<<"Enter the accelration : ";
cin >>accelration;

finalvelocity=(accelration*time)+initialvelocity;

cout<<"final velocity (m/s)  = " <<finalvelocity;

}