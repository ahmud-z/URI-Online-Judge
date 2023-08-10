#include<iostream>
using namespace std;

int main()
{

    int arr[100];
    int maxValue = -2147483647;
    int pos = -1;

    for(int i = 1; i<=100; i++)
    {
        cin>>arr[i];
    }


    for(int i = 1; i<=100; i++)
    {
        if(arr[i]>maxValue)
        {
            maxValue = arr[i];
            pos = i;
        }
    }

    cout<<maxValue<<endl;
    cout<<pos<<endl;

    return 0;

}
