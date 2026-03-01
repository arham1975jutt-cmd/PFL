#include <iostream>
using namespace std;
main(){
float imposter,player,chance ;

cout<<"Enter the imposter : " ;
cin >>imposter;

cout<<"Enter the player : ";
cin >>player;

chance=100*(imposter/player);

cout<<"chance of bring an imposter = " <<chance<<"%";

}