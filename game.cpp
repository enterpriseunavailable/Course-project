#include <iostream>
#include <stdlib.h>
#include <fstream>
#include "gcd.h"
using namespace std;

int main(){
cout << "This is a story of a warrior." << endl;
cout << "Your name is Kenshi. The world you live in will be destroyed by a devil in 8 days."<<endl;
cout << "Please make proper choice in the next 8 days and save the world in your own way." << endl;
int status[4]={0,0,0,0};
int *p=status;
ofstream fout("status.txt");
if(fout.fail()){
exit(1); }
for(int i=0;i<4;i++){
fout << *(p+i) <<" ";
}
fout.close();
cout << "GOOD LUCK."<<endl;
int day=1;
while(day<=8){
cout << "Input:\n1. Start a new day.\n2. Check Status" << endl;
int in;
cin >>in;
if(in==1){
cout << "You star a new day, please decide what to do." << "(day"<<day<<")"<<endl;
cout << "1. Read book\n2. Practice\n3. Go to Casino\n 4. Pray"<<endl;
int in2;
cin >>in2;
if(in2==1){
cout<<"You improve your knowledge by reading book."<<endl;
*p+=;
}
else if (in2==2){
cout<<"You improve power by practicing."<<endl;
*(p+1)+=;
}
else if (in2==3){
int luck=rand()%20;
if (luck=6){
*(p+2)=1;
day =9;
cout << "Congratulation! Your good luck win you the Excalibur as present from the Casino in one bet."<<endl;
break;}
cout << "You go to Casino and bet. You lose your pants in a poker game."<<endl;}
else if (in2==4){
cout << "You go to church and pray for peace."<<endl;
*(p+3)+=;
}
day +=;
ofstream fout("status.txt");
for(int j=0;j<4;j++){
fout<<*(p+i)<<" ";
}
fout.close();
}
else{
ifstream fin;
fin.open("status.txt"){
if(fin.fail()){
exit(1);
}
int a, b, c, d;
fin>>a>>b>>c>>d;
cout<<"Status:\nKnowledge: "<<a<<endl<<"Power: "<<b<<endl<<"Excalibur: "<<c<<endl<<"Piousness: "<<d<<endl;
}}
}
cout <<"The final day comes. Ready to face the devil."<<ednl;
show(*p, *(p+1), *(p+2), *(p+3));
}
