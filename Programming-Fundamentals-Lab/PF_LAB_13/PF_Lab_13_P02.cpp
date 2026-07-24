#include<iostream>
using namespace std;
bool sumOfN(int ar[100], int T, int s, int Sum)
{
    for(int j=0;j<s;j++)
    {
        cout<<"Enter elements ";
        cin>>ar[j];
    }
    Sum=0;
    int k=0;
    for(int j=0;j<T;j++)
    {
        for(int i=0; i<s; i++)
        {
            Sum+=ar[i];
            cout<<Sum<<endl;
        }
    }
    return true;
}
int main()
{
    int size, total,sum=0;
    int arr[100];
    cout<<"Enter size of the  array ";
    cin>>size;
    cout<<"Total ";
    cin>>total;
    cout<<sumOfN(arr, total, size, sum);
    return 0;
}