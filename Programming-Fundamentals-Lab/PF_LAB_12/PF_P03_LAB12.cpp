#include<iostream>
using namespace std;
int main()
{
    int info[3][5];
    int small=0, large=0;
    double avg;
    int sum=0, total_sum;
    cout<<"Enter Information "<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0; j<5; j++)
        {
            cin>>info[i][j];
            sum=sum+info[i][j];
        }
        
        if(sum<total_sum)
        {
             small=sum;
        }
        if(sum>total_sum)
        {
             large= sum;
        }
    }
    total_sum=total_sum+sum;
    avg=total_sum/5;
    cout<<"Avg "<<avg<<endl;
    cout<<"min "<<small<<endl;
    cout<<"max "<<large<<endl;
    return 0;
}