#include <iostream>
using namespace std;

int main()
{

    for (int i = 1; i < 5; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int k = 0; k < 5; k++)
    {
        for (int l = 0; l < 5-k; l++)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }
    

    return 0;
}