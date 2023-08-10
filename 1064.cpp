#include<iostream>
#include <iomanip>

using namespace std;

int main()
{
    double arr[6];
    int pos = 0;
    double sum = 0;

    for(int i = 0; i<6; i++)
    {
        cin>>arr[i];

        if(arr[i]>= 0)
        {
            pos++;
            sum +=arr[i];
        }
    }


    double avg = sum/pos;

    cout<<pos<<" valores positivos"<<endl;
    cout << setprecision(2)<<avg<<endl;



    return 0;
}
