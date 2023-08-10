#include<iostream>
#include <iomanip>

using namespace std;

int main()
{
    float x = 1;

    float s = 0;

    for(int i = 1; i<=100; i++)
    {
        float v = x/i;
        s+=v;
    }


    cout<<setprecision(3)<<s<<endl;


    return 0;
}
