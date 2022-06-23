#include <iostream>
using namespace std;

int main()
{
    string j, e, n, i, s, h;
    j = "j";
    e = "e";
    n = "n";
    i = "i";
    s = "s";
    h = "h";

    for (int i = 0; i < 6; i++)
    {
        for (int j = 1; j <= 6; j++)
        {
            if(i==0&&j==1||i==1&&j==2||i==2&&j==3||i==3&&j==4||i==4&&j==5)
            cout<<"j";
            if(i==1&&j==2||i==2&&j==3||i==3&&j==4||i==4&&j==5||i==0&&j==1)
            cout<<"e";
           
            else
            cout<<" ";
        }
        cout << endl;
    }
    return 0;
}