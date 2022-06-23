#include <iostream>
using namespace std;

int main()
{
    int rows;
    cout<<"enter number : ";
    cin>>rows;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 0; j <rows- i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "*";
        }
        for (int a = 1; a < i; a++)
        {
            cout << "*";
        }

        cout << endl;
    }
    return 0;
}
