#include<iostream>
using namespace std;


long long int findFib(int value)
{

    long long int fib[value];
    fib[0] = 0;
    fib[1] = 1;


    for (long long int i = 2; i <= value; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    return fib[value];

}

int main()
{
    int T;

    cin>>T;

    int arr[T];

    for(int i = 0; i<T; i++)
    {
        cin>>arr[i];
    }

    for(int i = 0; i<T; i++)
    {
        cout<<"Fib("<<arr[i]<<") = "<<findFib(arr[i])<<endl;
    }

    return 0;
}
