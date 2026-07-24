#include<iostream>
#include<climits>
using namespace std;

int main(){
int arraySize;

cout<<"Please enter size:";
cin>>arraySize;

if(arraySize<2){
cout<<"Invalid size";
return 0;
}

int*dynamicArray=new int[arraySize];

cout<<"Please enter elements:"<<endl;
for(int elementIndex=0;elementIndex<arraySize;elementIndex++){
cin>>dynamicArray[elementIndex];
}

int largestElement=INT_MIN;
int secondLargestElement=INT_MIN;

for(int elementIndex=0;elementIndex<arraySize;elementIndex++){
if(dynamicArray[elementIndex]>largestElement){
secondLargestElement=largestElement;
largestElement=dynamicArray[elementIndex];
}
else if(dynamicArray[elementIndex]>secondLargestElement&&dynamicArray[elementIndex]<largestElement){
secondLargestElement=dynamicArray[elementIndex];
}
}

if(secondLargestElement==INT_MIN){
for(int elementIndex=0;elementIndex<arraySize;elementIndex++){
if(dynamicArray[elementIndex]==largestElement){
secondLargestElement=largestElement;
break;
}
}
}

int firstOccurrenceIndex=-1;

for(int elementIndex=0;elementIndex<arraySize;elementIndex++){
if(dynamicArray[elementIndex]==secondLargestElement){
firstOccurrenceIndex=elementIndex;
break;
}
}

if(firstOccurrenceIndex==-1){
cout<<"Second largest element not found";
}
else{
cout<<"Index of First occurrence of second largest element is:"<<firstOccurrenceIndex;
}

delete[]dynamicArray;
dynamicArray=nullptr;

return 0;
}