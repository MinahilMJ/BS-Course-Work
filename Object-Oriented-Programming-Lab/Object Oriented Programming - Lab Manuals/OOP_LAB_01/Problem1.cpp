#include<iostream>
using namespace std;

int main(){
int firstNumber,secondNumber;
int*firstPointer;
int*secondPointer;

cout<<"Enter first integer:";
cin>>firstNumber;
cout<<"Enter second integer:";
cin>>secondNumber;

firstPointer=&firstNumber;
secondPointer=&secondNumber;

cout<<"Value through firstPointer:"<<*firstPointer<<endl;
cout<<"Value through secondPointer:"<<*secondPointer<<endl;

*firstPointer=*firstPointer+10;
*secondPointer=*secondPointer+20;

cout<<"Updated first value:"<<*firstPointer<<endl;
cout<<"Updated second value:"<<*secondPointer<<endl;

return 0;
}