//Sum of Consecutive Odd Numbers I :: beecrowd | 1071

#include<iostream>
#include <cmath>

using namespace std;

int main()
{

    int num1,num2;
    int sum = 0;

    cin>>num1;
    cin>>num2;

    for(int i = num2+1; i<num1; i++)
    {
        if(i%2!=0)
        {
            sum+=i;
        }
    }

    cout<<sum<<endl;
}
