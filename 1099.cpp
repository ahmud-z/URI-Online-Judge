#include<iostream>
using namespace std;

int sum(int a, int b)
{
    int sum = 0;

    if(a<b)
    {
        for(int i = a+1; i<b; i++)
            if(i%2!=0)
            {
                sum+=i;
            }
    }

    if(a>b)
    {
        for(int i = a-1; i>b; i--)

            if(i%2!=0)
            {
                sum+=i;
            }
    }

    cout<<sum<<endl;
}

int main()
{
    int n;

    cin>>n;

    int a,b;

    int arr[n][n];

    for(int i = 0; i<n; i++)
    {
        cin>>a>>b;

        arr[i][0] = a;
        arr[i][1] = b;
    }


    for(int i = 0; i<n; i++)
    {
        sum(arr[i][0], arr[i][1]);
    }

    return 0;
}
