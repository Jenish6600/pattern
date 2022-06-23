#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter number : ";
    cin>>n;
    for (int i = 0; i <= n; i++)
    {

        if (i == 0 || i == n)
            cout << "  ";
        else
            cout << "* ";
    }
    cout << endl;
    for (int k = 0; k < 1; k++)
    {
        for (int l = 0; l <=n; l++)
        {
            if(l==0||l==n)
            cout<<"* ";
            else
            cout<<"  ";
        }
        
    }
    cout<<endl;
    for (int j = 0; j < n-2; j++)
    {
        cout << "* " << endl;
    }
      for (int k = 0; k < 1; k++)
    {
        for (int l = 0; l <=n; l++)
        {
            if(l==0||l==n)
            cout<<"* ";
            else
            cout<<"  ";
        }
        
    }
    cout<<endl;
     for (int i = 0; i <= n; i++)
    {

        if (i == 0 || i == n)
            cout << "  ";
        else
            cout << "* ";
    }

    return 0;
}
