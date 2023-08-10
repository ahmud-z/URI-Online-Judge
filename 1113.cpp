#include<iostream>
using namespace std;


int main()
{
    int a,b;

    do
    {
        cin>>a>>b;

        if(a==b)
        {
            break;
        }

        if(a>b)
        {
            cout<<"Decrescente"<<endl;
        }
        else if(a<b)
        {
            cout<<"Crescente"<<endl;
        }
    }
    while(a!=b);

    return 0;
}
