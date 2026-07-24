#include<iostream>
using namespace std;

int main(){
int*inputNumberPointer=new int;

cout<<"Please enter the integer:";
cin>>*inputNumberPointer;

cout<<"Square of numbers is:"<<(*inputNumberPointer)*(*inputNumberPointer)<<endl;
cout<<"Cube of numbers is:"<<(*inputNumberPointer)*(*inputNumberPointer)*(*inputNumberPointer)<<endl;
cout<<"Half of numbers is:"<<(*inputNumberPointer)/2<<endl;

delete inputNumberPointer;
inputNumberPointer=nullptr;

return 0;
}