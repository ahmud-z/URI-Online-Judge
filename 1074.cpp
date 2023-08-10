#include<iostream>
using namespace std;

void findData(int value)
{
    if (value<0 && value%2==0)
    {
        cout<<"EVEN NEGATIVE"<<endl;
    }
    else if(value>0 && value%2==0)
    {
        cout<<"EVEN POSITIVE"<<endl;
    }
    else if (value<0 && value%2!=0)
    {
        cout<<"ODD NEGATIVE"<<endl;
    }
    else if(value>0 && value%2!=0)
    {
        cout<<"ODD POSITIVE"<<endl;
    }
    else
    {
        cout<<"NULL"<<endl;
    }
}

int main()
{

    int N;

    cin>>N;

    int arr[N];

    for(int i = 0; i<N; i++)
    {
        cin>>arr[i];
    }


    for(int i = 0; i<N; i++)
    {
        findData(arr[i]);
    }


    return 0;
}

