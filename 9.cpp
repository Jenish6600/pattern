#include <iostream>
using namespace std;

int main()
{
    int rows;
    cout << "enter number : ";
    cin >> rows;
    for (int i = 1; i <= rows; i++)
    {
        for (int a = 0; a < 2; a++)
        {
            for (int j = 1; j <= rows; j++)
            {
               
                if (a == 0)
                {
                    if (i == 1 || j == 1 || i == rows || i == rows / 2 + 1 || j == rows / 2 + 1)
                        cout << "*";
                    else
                        cout<<" ";
                }

                else if (a == 1)
                {
                    if (i == 1  ||j == rows|| i == rows || i == rows / 2 + 1 || j == rows / 2 + 1)
                        cout << "*";
                    else
                        cout<<" ";
                }
                else
                {
                    cout<<" ";
                }
            }
        }
        cout << endl;
    }

    return 0;
}
// #include <iostream>
// using namespace std;

// int main()
// {
//     int rows;
//     cout << "enter number : ";
//     cin >> rows;
//     for (int i = 1; i <= rows; i++)
//     {
//         for (int a = 0; a < 1; a++)
//         {
//             for (int j = 1; j <= rows; j++)
//             {
//                 if (i == 1 || j == 1 || i == rows || j == rows || i == rows / 2 + 1 || j == rows / 2 + 1)
//                 {

//                     cout << "*";
//                 }
//                 else
//                 {
//                     cout << " ";
//                 }
//             }
//         }
//             cout << endl;
//     }

//     return 0;
// }
// //                 // if (a==0==(i == 1 || j == 1 || i == rows || i == rows / 2 + 1 || j == rows / 2 + 1)|| a==1==( j == 1 || i == rows || j == rows || i == rows / 2 + 1 || j == rows / 2 + 1))
// // if (a==0==(i == 1 || j == 1 || i == rows || i == rows / 2 + 1 || j == rows / 2 + 1)|| a==1==( j == 1 || i == rows || j == rows || i == rows / 2 + 1 || j == rows / 2 + 1))