#include <iostream>
using namespace std;
main(){
float size_bag,cost,area,per_pound,per_square ;

cout<<"Enter the size of fertilizer bag  : " ;
cin >>size_bag;

cout<<"Enter the cost of bag : ";
cin >>cost;

cout<<"Enter the area in square covered the bag : ";
cin >>area;

per_pound=cost/size_bag;
per_square=cost/area;


cout<<"  cost of fertilizer par pound : "<<per_pound;
cout<<"  cost of fertilizer par square : "<<per_square;
}
