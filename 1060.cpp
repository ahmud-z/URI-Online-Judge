//Positive Numbers :: 1060

#include<iostream>
using namespace std;

int main()
{

    double a, b, c, x, y, z;

    int totalPositive = 0;

    cin>>a;
    cin>>b;
    cin>>c;
    cin>>x;
    cin>>y;
    cin>>z;


    if(a>=0)
    {
        totalPositive++;
    }

    if(b>=0)
    {
        totalPositive++;
    }

    if(c>=0)
    {
        totalPositive++;
    }

    if(x>=0)
    {
        totalPositive++;
    }

    if(y>=0)
    {
        totalPositive++;
    }

    if(z>=0)
    {
        totalPositive++;
    }

    cout<<totalPositive<<" valores positivos"<<endl;

    return 0;
}
