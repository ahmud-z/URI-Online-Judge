//simple sort

#include<iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    int a,b,c;

    cin>>a>>b>>c;

    int arr[] = {a,b,c};


    for(int i = 0; i<3; i++)
    {
        for(int j = 0; j<3; j++)
        {
            if(arr[i]<arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for(int i = 0; i<3; i++)
    {
        cout<<arr[i]<<endl;
    }

    cout<<endl;

    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;

    return 0;
}
