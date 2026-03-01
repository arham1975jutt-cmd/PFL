#include<iostream>
using namespace std;
main(){
int wins, draw, lose, result;

cout<<"Enter the numbers of wins :";
cin>>wins;

cout<<"Enter the numbers of draw :";
cin>>draw;

cout<<"Enter the number of losses :";
cin>>lose;

result=(wins*3)+(draw*1)+(lose*0);

cout<<"Pakistan has obtained  "<<result<<"  in Asia cup";
}