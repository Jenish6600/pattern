#include <iostream>
using namespace std;

int main()
{
    int rows;
    cout<<"enter rows : ";
    cin>>rows;
    for (int i = 0; i < rows; i++)
    {
        for (int k = 1; k <= i; k++)
        {
            cout << " ";
        }
        for (int j = 0; j < rows - i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
