#include <iostream>
using namespace std;
main(){
int area, width, height, result;

cout<<"Enter area of walls : ";
cin >>area;

cout << "Enter width: ";
cin >> width;

cout << "Enter height: ";
cin >> height;

result = area/ (height*width);

cout << "wall painted = " << result;

}