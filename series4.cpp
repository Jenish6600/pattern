#include <iostream>
using namespace std;

int main()
{
    int t1 = 0, t2 = 1, n1 = 0;
    for (int i = 1; i < 10; i++)
    {
        if (i == 1)
        {
            cout << t1 << ", ";
            continue;
        }
        if (i == 2)
        {
            cout << t2 << ", ";
            continue;
        }
    n1 = t1 + t2;
    t1 = t2;
    t2 = n1;
    cout << n1 << ", ";
    }

    return 0;
}