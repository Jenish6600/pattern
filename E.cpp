#include <iostream>
using namespace std;

int main()

{
    int  n;
    cout<<"enter number : ";
    cin>>n;
    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "* ";
        }
    }
    cout << endl;
    for (int p = 0; p < (n-1)/2; p++)
    {
        cout<<"* "<<endl;
    }
    
    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "* ";
        }
    }
    cout << endl;
    for (int o = 0; o < (n-1)/2; o++)
    {
        cout<<"* "<<endl;
    }
    
    for (int l = 0; l < 1; l++)
    {
        for (int m = 0; m < n; m++)
        {
            cout << "* ";
        }
    }

    return 0;
}