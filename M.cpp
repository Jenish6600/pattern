#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i < 7; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (j == 1 || j == i)
                cout << "* ";
            else
                cout << "  ";
        }
        for (int l = 0; l < 6 - i; l++)
        {
            cout << "  ";
        }
        for (int m = 0; m < 6 - i; m++)
        {
            cout << "  ";
        }
        for (int k = 1; k <= i; k++)
        {
            if (k == 1 || k == i)
                cout << "* ";
            else
                cout << "  ";
        }

        cout << endl;
    }
    // for (int n = 0; n < 1; n++)
    // {
    //     for (int o = 1; o <= 7; o++)
    //     {
    //         if (o == 1  ||o==4|| o == 7)
    //             cout << "*";
    //         else
    //             cout << "     ";
    //     }
    //     cout<<endl;
    // }
    for (int n = 0; n < 3; n++)
    {
        for (int o = 1; o <= 7; o++)
        {
            if (o == 1  || o == 7)
                cout << "* ";
            else
                cout << "    ";
        }
        cout<<endl;
    }

    return 0;
}
