#include<iostream>
#include<stdio.h>
#include <iomanip>

using namespace std;

int main()
{
    int N;

    cin>>N;

    float a,b;

    for(int i = 0; i<N; i++)
    {
        cin>>a>>b;

        if(b==0)
        {
            cout<<"divisao impossivel"<<endl;
        }
        else
        {
            printf("%.1f\n",a/b);
        }
    }


    return 0;
}
