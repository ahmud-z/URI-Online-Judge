#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void wAvrg(float a, float b, float c)
{
    float sum = 2+3+5;

    float wSum = ((a*2)+(b*3)+(c*5));

    cout<<setprecision(2)<<wSum/sum<<endl;
}

int main()
{
    int N;

    printf("%.1f", 5.5);

    cin>>N;

    float data[N][N];

    float a, b, c;

    for(int i = 0; i<N; i++)
    {
        cin>>a>>b>>c;
        data[i][0] = a;
        data[i][1] = b;
        data[i][2] = c;
    }


    for(int i = 0; i<N; i++)
    {
        wAvrg(data[i][0], data[i][1], data[i][2]);
    }

    return 0;
}
