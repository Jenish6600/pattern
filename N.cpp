#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (j == 0 || j == 7 || i == 1 && j == 1 || i == 2 && j == 2 || i == 3 && j == 3 || i == 4 && j == 4 || i == 5 && j == 5 || i == 6 && j == 6 || i == 7 && j == 7 )
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }

    return 0;
}