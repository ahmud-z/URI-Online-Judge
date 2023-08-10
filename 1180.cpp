#include<iostream>
using namespace std;

int main()
{
    int N;

    cin>>N;

    int arr[N];
    int minValue = 2147483647;
    int minPos = -1;

    for(int i = 0; i<N; i++)
    {
        cin>>arr[i];
    }

    for(int i = 0; i<N; i++)
    {
        if(minValue>arr[i])
        {
            minValue = arr[i];
            minPos = i;
        }
    }

    cout<<"Menor valor: "<<minValue<<endl;
    cout<<"Posicao: "<<minPos<<endl;


    return 0;
}
