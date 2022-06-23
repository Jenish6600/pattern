#include <iostream>
using namespace std;

int main()
{
    int rows;
    cout<<"enter number : ";
    cin>>rows;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < rows - i; k++)
        {
            cout << "*";
        }
        for (int l = 1; l < rows - i; l++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int m = 1; m < rows; m++)
    {
        for (int n = 1; n < rows - m; n++)
        {
            cout << " ";
        }
        for (int o = 0; o < m; o++)
        {
            cout << "*";
        }
        for (int p = 0; p < m+1; p++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

