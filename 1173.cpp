#include<iostream>
using namespace std;

int main()
{

    int N[10];

    int n;

    cin>>n;


    int temp = 0;

    N[0] = n;

    for(int i = 1; i<10; i++)
    {

        N[i] = (N[temp]*2);

        temp++;
    }


    for(int i = 0; i<10; i++)
    {
        cout<<"N["<<i<<"] = "<<N[i]<<endl;
    }

    return 0;
}
