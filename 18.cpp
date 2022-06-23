#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter number : ";
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if(j==1)
            {
                cout<<"* ";
            }
            else
            { 
                cout<<"  ";
            }
        }
        for (int i = 0; i < 1; i++)
        {
            cout << "* " ;
        }

        for (int k = 1; k <= n; k++)
        {
            if(i==1)
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
            
        }
        cout << endl;
    }
    for (int l = 0; l < n * 2+1; l++)
    {
        cout << "* ";
    }
    cout << endl;

    for (int a = 1; a <= n; a++)
    {
        for (int b = 1; b <= n; b++)
        {
            if(a==n)
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
            
        }
        for (int i = 0; i < 1; i++)
        {
            cout << "* " ;
        }
        for (int c = 1; c <= n; c++)
        {
            if(c==n)
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
            
        }
        cout << endl;
    }

    return 0;
}

/*
*          ***********
*          *
*          *
*          *
*          *
*          *
*          *
*          *
*          *
*          *
***********************
           *          *
           *          *
           *          *
           *          *
           *          *
           *          *
           *          *
           *          *
           *          *
           *          *
************          *







*/
        //     // for (int m = 0; m < 1; m++)
        //     // {
        //     //     cout<<"*"<<endl;
        //     // }



        