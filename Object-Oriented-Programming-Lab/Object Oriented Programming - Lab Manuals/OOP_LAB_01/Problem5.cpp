#include<iostream>
using namespace std;

int main(){
const int firstValue=5;
const int secondValue=12;
const int thirdValue=10;

const int*firstPointer=&firstValue;
const int*secondPointer=&secondValue;
const int*thirdPointer=&thirdValue;

const int*medianPointer;

if((*firstPointer>=*secondPointer&&*firstPointer<=*thirdPointer)||(*firstPointer<=*secondPointer&&*firstPointer>=*thirdPointer)){
medianPointer=firstPointer;
}
else if((*secondPointer>=*firstPointer&&*secondPointer<=*thirdPointer)||(*secondPointer<=*firstPointer&&*secondPointer>=*thirdPointer)){
medianPointer=secondPointer;
}
else{
medianPointer=thirdPointer;
}

cout<<"Median is:"<<*medianPointer<<endl;

int firstCopy=*firstPointer;
int secondCopy=*secondPointer;
int thirdCopy=*thirdPointer;

int*firstCopyPointer=&firstCopy;
int*secondCopyPointer=&secondCopy;
int*thirdCopyPointer=&thirdCopy;

if((*firstCopyPointer>=*secondCopyPointer&&*firstCopyPointer<=*thirdCopyPointer)||(*firstCopyPointer<=*secondCopyPointer&&*firstCopyPointer>=*thirdCopyPointer)){
*firstCopyPointer=-1;
}
else if((*secondCopyPointer>=*firstCopyPointer&&*secondCopyPointer<=*thirdCopyPointer)||(*secondCopyPointer<=*firstCopyPointer&&*secondCopyPointer>=*thirdCopyPointer)){
*secondCopyPointer=-1;
}
else{
*thirdCopyPointer=-1;
}

cout<<"Values after modification:"<<endl;
cout<<firstCopy<<" "<<secondCopy<<" "<<thirdCopy;

return 0;
}