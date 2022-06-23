#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter number : ";
    cin>>n;
    for (int i = 1; i <n; i++)
    {
        for (int j = 1; j < n-i; j++)
        {
            cout<<" ";
        }
        for (int k = 1; k <=i; k++)
        {
                     if(i==n/2+1 || k==1 )
                     {
                        cout<<"*";
                     }
                     else
                     {
                        cout<<" ";
                     }
            
        }
        for (int l = 1; l <=i; l++)
        {
                     if(i==n/2+1 || l==i )
                     {
                        cout<<"*";
                     }
                     else
                     {
                        cout<<" ";
                     }
        }
        cout<<endl;
    }
    
    return 0;
}