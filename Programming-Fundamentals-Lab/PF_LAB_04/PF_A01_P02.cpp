#include<iostream>

using namespace std;

int main()
{
    int H, s, t;
    cout << "H = ";
    cin >> H;

    for (s = 1; s <= H; s++)
    {
        for (t = 1; t <= H; t++)
        {
            if (s == 1 || s == H || t == 1 || t == H)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}