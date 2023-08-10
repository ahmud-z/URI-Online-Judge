#include<iostream>
using namespace std;

int main()
{

    int a,b;

    do
    {
        cin>>a>>b;

        if(a<0 || b<0)
        {
            break;
        }

        if(a!=0 && b!=0 && a>b)
        {
            int sum =0;

            for(int i  = b; i<=a; i++)
            {
                sum+=i;
                cout<<i<<" ";
            }
            cout<<"Sum="<<sum<<endl;
        }
        else if(a!=0 && b!=0 && a<=b)
        {

            int sum =0;

            for(int i  = a; i<=b; i++)
            {
                sum+=i;
                cout<<i<<" ";
            }
            cout<<"Sum="<<sum<<endl;
        }

    }
    while(a>0 && b>0);

    return 0;
}
