#include <iostream>
using namespace std;

int main()
{
    int rows;
    cout << "enter number : ";
    cin >> rows;
    for (int i = 1; i <=rows; i++)
    {
        for (int j = 0; j < rows - i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k < i; k++)
        {
            if (k == 1 || i == 1 || i == rows )
            {
                cout << "+";
            }
            else
                cout << " ";
        }
        for (int l = 1; l <= i; l++)
        {
            if (i == 1 || l == i || i == rows)
                cout << "+";
            else
                cout << " ";
        }

        cout << endl;
    }

    return 0;
}