#include<iostream>
using namespace std;

int main()
{
    int arr[20];
    int N[20];

    int j = 19;

    for(int i = 0; i<20; i++)
    {
        cin>>arr[i];
        N[j] =  arr[i];
        j--;
    }



    for(int i = 0; i<20; i++)
    {
        cout<<"N["<<i<<"] = "<<N[i]<<endl;

    }

    return 0;
}
