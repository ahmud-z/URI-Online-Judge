#include<iostream>

using namespace std;

int main()
{

    int num;

    do
    {
        cin>>num;

        for(int i = 1; i<=num; i++)
        {
            cout<<i;
            if(i<num)
            {
                cout<<" ";
            }
        }
        if(num>0)
        {
            cout<<endl;
        }
    }
    while(num!=0);


    return 0;

}
