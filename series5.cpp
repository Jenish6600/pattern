#include <iostream>
using namespace std;

int main()
{
    int t1 = 0, t2 = 1, n1 = 0;
    cout << t1 << ", " << t2 << ", ";
    n1 = t1 + t2;
    while (n1 < 100)
    {
        cout << n1 << ", ";

        t1 = t2;
        t2 = n1;
        n1 = t1 + t2;
    }

    return 0;
}