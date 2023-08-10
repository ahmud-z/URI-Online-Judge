#include<iostream>
using namespace std;

int main()
{
    int num1;
    int num2;
    int sum = 0;

    cin>>num1;
    cin>>num2;

    if(num1!=0 && num2!=0){
    for(int i = num1; i<=num2; i++)
    {
        if(i%13!=0)
        {
            sum += i;
        }
    }
    }

    cout<<sum<<endl;
}
