#include <iostream>
using namespace std;

int main()
{
    int n ,a=1, sum = 0;
    cout << "enter number : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
         sum += i;
        cout << a;
        a++;
    }
    cout << endl;
    cout << sum;

    return 0;
}