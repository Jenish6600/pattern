// 1
// 2 3
// 4 5 6
// 7 8 9 10

#include <iostream>
using namespace std;

int main()
{
    int number = 1;
    for (int i = 1; i < 5; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << number;
        }
        number++;
        cout << endl;
    }

    return 0;
}