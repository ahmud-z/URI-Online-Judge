#include<iostream>
using namespace std;


int main()
{
    int num1, num2;

    cin>>num1>>num2;

    int rem = 0;

    if(num2>num1)
    {
        rem = num2%num1;
    }
    else
    {
        rem = num1%num2;
    }

    if(rem == 0)
    {
        cout<<"Sao Multiplos"<<endl;
    }
    else
    {
        cout<<"Nao sao Multiplos"<<endl;
    }

}
