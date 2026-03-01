#include<iostream>
using namespace std;
main(){
int current , birthrate, result;

cout<<"Enter the current world population :";
cin>>current;

cout<<"Enter the monthly birth rate :";
cin>>birthrate;

result=(birthrate*12)*30+current;


cout<<"papulation in three decades will be"<<result;




}