#include <iostream>
using namespace std;

int main()
{
    int rows;
    cout << "enter number : ";
    cin >> rows;
    for (int f = 0; f < 1; f++)
    {
       

        for (int i = 0; i < rows; i++)
        {
            for (int j = 1; j < rows - i; j++)
            {
                cout << "  ";
            }
            
            for (int k = 1; k <= i + 1; k++)
            {
                if(i==0|| k==i+1 || i==rows-1 )
                {
                cout << "* ";
                }
                else
                {
                    cout<<"  ";
                }
            }
            for (int a = 1; a <= i; a++)
            {
                cout << "* ";
            }
            cout << endl;
        }
        rows = rows - 1;
        for (int e = 1; e <= rows; e++)
        {
            for (int x = 0; x < e; x++)
            {
                cout << "  ";
            }

            for (int y = 0; y <= rows - e; y++)
            {
                if (y==rows-e )
                {
                    cout << "* ";
                }
                else
                {
                    cout<<"  ";
                }
            }
                for (int z = 0; z < rows  - e; z++)
                {
                    cout << "* ";
                }
                cout << endl;
            }
        }
    }
