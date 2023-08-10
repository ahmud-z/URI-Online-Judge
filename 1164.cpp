#include<iostream>
using namespace std;


int check(int value)
{
    int sum = 0;
    int flag = -1;

    for(int i = 1; i<value; i++)
    {
        if(value%i == 0)
        {
            sum += i;
        }
    }

    if(sum == value)
    {

        flag = 1;
    }

    return flag;

}

int main()
{

    int n;

    cin>>n;


    int arr[n];



    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }


    for(int i = 0; i<n; i++)
    {
        int value = check( arr[i]);

        if(value == 1)
        {
            cout<<arr[i]<<" eh perfeito"<<endl;
        }
        else
        {
            cout<<arr[i]<<" nao eh perfeito"<<endl;
        }
    }

    return 0;
}
