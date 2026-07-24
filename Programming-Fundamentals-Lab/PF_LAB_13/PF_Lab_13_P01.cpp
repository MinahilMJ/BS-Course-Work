#include<iostream>
#include<vector>
using namespace std;
void sumOfN()
{
    int S = 0, Ind = 0, N = 0, sum = 0, j = 0;
    cout << "Enter the size of the array ";
    cin >> S;
    int ar[100];
    int k = 0;
    for (int i = 0; i < S; i++) {
        cout << "Enter elements of the array  ";
        cin >> ar[i];
    }
    cout << "Enter Index Value ";
    cin >> Ind;
   
    cout << "Enter the number of values till which you want the sum ";
    cin >> N;

    for (int i = Ind; i <=S; i++)
    {
        if (N > 0) {
            sum += ar[i];
        }
        N--;
    }
    cout << "Sum = " << sum << endl;
}
int main()
{
    sumOfN();
    return 0;
}