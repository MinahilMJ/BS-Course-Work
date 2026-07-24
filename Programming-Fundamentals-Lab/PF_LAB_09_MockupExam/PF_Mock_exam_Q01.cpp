#include<iostream>
using namespace std;
int main()
{
    int n, i;
    double t_time, t_cost;
    double start_time, end_time;
    cout << "1. Monday " << endl
        << "2. Tuesday " << endl
        << "3. Wednesday " << endl
        << "4. Thursday " << endl
        << "5. Friday " << endl
        << "6. Saturday " << endl
        << "7. Sunday " << endl;
    do {
        cout << "Enter the number of the Day you want to select: ";
        cin >> n;
        if (n == 1 || n == 2 || n == 3 || n == 4 || n == 5)
        {
            cout << "Enter start time" << endl;
            cin >> start_time;
            if (start_time >= 800 && start_time <= 1800)
            {
                cout << "Enter end time" << endl;
                cin >> end_time;
                if (end_time >= 800 && end_time <= 1800)
                {
                    start_time = start_time * 60;
                    start_time = start_time / 100;
                    end_time = end_time * 60;
                    end_time = end_time / 100;
                    t_time = end_time - start_time;
                    t_cost = t_time * 0.40;
                    cout << "The cost of the call is " << t_cost << " dollars" << endl;
                }
                else
                {
                    cout << "Invalid Time" << endl;
                }
            }
            else if (start_time >= 0 && start_time <= 759 || start_time >= 1801 && start_time <= 2359)
            {
                cout << "Enter end time" << endl;
                cin >> end_time;
                if (end_time >= 0 && end_time <= 759 || end_time >= 1801 && end_time <= 2359)
                {
                    start_time = start_time * 60;
                    start_time = start_time / 100;
                    end_time = end_time * 60;
                    end_time = end_time / 100;
                    t_time = end_time - start_time;
                    t_cost = t_time * 0.25;
                    cout << "The cost of the call is " << t_cost << " dollars" << endl;
                }
                else
                {
                    cout << "Invalid Time" << endl;
                }
            }
        }
        else if (n == 6 || n == 7)
        {
            cout << "Enter start time" << endl;
            cin >> start_time;
            cout << "Enter end time" << endl;
            cin >> end_time;
            start_time = start_time * 60;
            start_time = start_time / 100;
            end_time = end_time * 60;
            end_time = end_time / 100;
            t_time = end_time - start_time;
            t_cost = t_time * 0.15;
            cout << "The cost of the call is " << t_cost << " dollars" << endl;
        }
        else
        {
            cout << "Invalid Number" << endl;
        }
        cout << "Press 1 to continue " << endl << "OR" << endl;
        cout << "Press -1 to exit " << endl;
        cin >> i;
    } while (i == 1);
    return 0;
}
