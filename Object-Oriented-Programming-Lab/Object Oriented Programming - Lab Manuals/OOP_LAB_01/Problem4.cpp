#include<iostream>
using namespace std;

int main(){
int arraySize;

cout<<"Please enter size:";
cin>>arraySize;

if(arraySize<=0){
cout<<"Invalid size";
return 0;
}

int*dynamicArray=new int[arraySize];

cout<<"Enter "<<arraySize<<" elements:"<<endl;

int*currentPointer=dynamicArray;

for(int elementIndex=0;elementIndex<arraySize;elementIndex++){
cin>>*currentPointer;
currentPointer++;
}

currentPointer=dynamicArray;

for(int elementIndex=0;elementIndex<arraySize;elementIndex++){
*currentPointer=*currentPointer+3;
currentPointer++;
}

cout<<"Resulting Array:";

currentPointer=dynamicArray;

for(int elementIndex=0;elementIndex<arraySize;elementIndex++){
cout<<*currentPointer;
if(elementIndex<arraySize-1){
cout<<",";
}
currentPointer++;
}

delete[]dynamicArray;
dynamicArray=nullptr;

return 0;
}