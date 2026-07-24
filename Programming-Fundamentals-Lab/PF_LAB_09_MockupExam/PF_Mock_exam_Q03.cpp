#include<iostream>
using namespace std;
int main()
{
    int n, a;
    double j;
    cout << "Enter the length of sequence : " << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << "Enter a number ";
        cin >> a;
    }
    if (n < 3)
    {
        cout << "Neither";
    }
    else if (a >= a <= a >= a)
    {
        cout << "Zag zig";
    }
    else
    {
        cout << "Zig Zag";
    }
    return 0;
}
