#include<iostream>
using namespace std;

int main()
{
    int x = 1;
    int y = 1;
    int f = 7;

    for(int i = 1; i<=5; i++)
    {
        for(int j = 1; j<=3; j++)
        {

            cout<<"I="<<x<<" "<<"J="<<f<<endl;

            f--;
        }

        x+=2;
        f=7;
    }
    return 0;
}
