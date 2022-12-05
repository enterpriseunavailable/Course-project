#include <iostream>
#include "game.h"
using namespace std;
//Inputs are status of player. Outputs are results of the game.

void show(int a, int b, int c, int d){
if(c==1){
cout<<"You win an Excalibur, and you use it to kill the devil."<<endl;}
else if(a>=5){
cout<<"You persuade the devil to live in this world quitely using your knoweldge."<<endl;
}
else if(b>=5){
cout<<"You beat the devil by your power."<<endl;}
else if(d>=5){
cout<<"You are pious enough to move Jesus. Jesus appears and solves the problem."<<endl;}
else{
cout<<"The devil comes. You fail to stop it. The world is now ruling by the devil. However, it is not much different from the original world."<<endl;}
cout<<"Congratulation! You have completed this game!"<<endl;
}
