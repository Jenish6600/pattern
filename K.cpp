#include<iostream>
using namespace std;

int main()

{
    for (int i = 1; i <6; i++)
    {
        for (int j = 0; j <=6-i; j++)
        {
            if(j==0||j==6-i)
            cout<<"* ";
            else
            cout<<"  ";
        }
        cout<<endl;
    }
    for (int k = 2; k < 7; k++)
    {
        for (int l = 1; l <=k; l++)
        {
            if(l==1||l==k)
            cout<<"* ";
            else
            cout<<"  ";
            
        }
        cout<<endl;
    }
    
    
    return 0;
}