#include<iostream>
#include<iomanip>

using namespace std;

int main()
{

    int num = 0;
    int temp = 0;
    double sum = 0;


    do
    {
        cin>>num;
        if(num>0)
        {
            sum+=num;
            temp++;
        }
    }
    while(num>=0);

    double avg = 0;

    avg = sum/temp;

    cout<<setprecision(4)<<avg<<endl;

    return 0;
}
