#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (i == 0 && j == 2 || i == 0 && j == 3 || i == 1 && j == 1 || i == 1 && j == 4 || i == 2 && j == 0 || i == 2 && j == 5 || i == 3 && j == 0 || i == 3 && j == 5 || i == 4 && j == 1 || i == 4 && j == 4 || i == 5 && j == 2 || i == 5 && j == 3)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }

    return 0;
}