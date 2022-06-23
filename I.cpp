#include<iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 7; i++)
    {
        cout<<"* ";
    }
    cout<<endl;
    for (int j = 0; j < 7; j++)
    {
        for (int k = 0; k < 7; k++)
        {
            if(k==3)
            cout<<"*";
            else
            cout<<"  ";
        }
        cout<<endl;
    }
    for (int i = 0; i < 7; i++)
    {
        cout<<"* ";
    }
    cout<<endl;
    
    return 0 ;
}