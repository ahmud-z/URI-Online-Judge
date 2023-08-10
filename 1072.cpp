#include<iostream>

using namespace std;

int main()
{

    int N;

    cin>>N;

    long long int arr[N];
    int in = 0;
    int out = 0;

    for(int i = 0; i<N; i++)
    {
        cin>>arr[i];
        if(arr[i]>=10 && arr[i]<=20)
        {
            in++;
        }
        else
        {
            out++;
        }
    }

    cout<<in<<" in"<<endl;
    cout<<out<<" out"<<endl;

    return 0;

}
