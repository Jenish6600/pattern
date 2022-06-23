// #include <iostream>
// using namespace std;

// int main()
// {
//     int num = 1;
//     for (int i = 0; i < 5; i++)
//     {
//         for (int k = 0; k < 5 - i; k++)
//         {
//             cout << "  ";
//         }

//         for (int j = 0; j <= i; j++)
//         {
//                 cout<<"*";
//                 cout<<"   ";
//         }
//         cout << endl;
//     }

//     return 0;
// }


#include <iostream>
using namespace std;

int main()
{
    int rows, a = 1;

    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i = 0; i < rows; i++)
    {
        for(int k = 1; k <= rows-i; k++)
            cout <<"  ";

        for(int j = 0; j <= i; j++)
        {
            if (j == 0 || i == 0)
                a = 1;
            else
                a = a*(i-j+1)/j;

            cout << a << "   ";
        }
        cout << endl;
    }

    return 0;
}