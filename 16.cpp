#include <iostream>
using namespace std;

int main()
{
    int rows;
    cout<<"enter number : ";
    cin>>rows;
    for (int i = 1; i <= rows; i++)
    {
        for (int k = 1; k < i; k++)
        {
            cout << " ";
        }

        for (int j = 1; j <= rows; j++)
        {
            if (i == 1 || i == rows || j == 1 || j == rows)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}