#include<iostream>
using namespace std;

int main()
{
    int rows;
    cout<<"enter number : ";
    cin>>rows;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j < i; j++)
        {
            cout<<" ";
        }
        for (int k = 0; k <=rows-i; k++)
        {
            if(k==0|| i==1 || k==rows-i)
            cout<<"*";
            else
            cout<<" ";
        }
        cout<<endl;

    }
    
    return 0;
}