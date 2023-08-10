#include<iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double a,b,c,d,e,f;

    cin>>a>>b>>c>>d>>e>>f;

    int pos = 0;
    double sum = 0;

    double arr[] = {a,b,c,d,e,f};

    for(int i = 0; i<6; i++)
    {
        if(arr[i]>=0)
        {
            pos++;
            sum = sum + arr[i];
        }
    }

    double avrg = sum/pos;

    cout<<sum;

    cout<<pos<<" valores positivos"<<endl;

    cout << setprecision(2) <<avrg<<endl;

}

