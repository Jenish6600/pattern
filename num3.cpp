// 1
// 2 3
// 4 5 6
// 7 8 9 10

#include<iostream>
using namespace std;

int main()
{
    int number =15 ;
    for (int i = 1; i <=5; i++)
    {
        for (int j = 0; j <=5-i; j++)
        {
            cout<<number;
            number--;
        }
        cout<<endl;
            
    }
    
    return 0;
}