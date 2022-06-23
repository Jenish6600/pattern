#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 9; i++)
    {
        cout << "* ";
    }
    cout<<endl;
    for (int j = 0; j < 5; j++)
    {
        for (int k = 0; k < 9; k++)
        {
            if (k == 4)
                cout << "*";
            else
                cout << "  ";
        }
        cout << endl;
    }
    
    for (int a = 0; a < 1; a++)
    {
        for (int b = 0; b < 9; b++)
        {
            if(b==1||b==4)
            cout<<"* ";
            else
            cout<<"  ";
        }
        
    }
    cout<<endl;
    for (int l = 0; l < 1; l++)
    {
        for (int m = 0; m < 9; m++)
        {
            if(m==2|| m==3 )
            cout<<"* ";
            else
            cout<<"  ";
        }
        
    }
    

    return 0;
}