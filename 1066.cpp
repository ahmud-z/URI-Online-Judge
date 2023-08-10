#include<iostream>
using namespace std;

int main()
{

    int arr[5];

    int pos = 0, neg = 0, even = 0, odd = 0;

    for(int i = 0; i<5; i++)
    {
        cin>>arr[i];

        if(arr[i]>0)
        {
            pos++;
        }
        if(arr[i]<0)
        {
            neg++;
        }
        if(arr[i]%2==0)
        {
            even++;
        }
        if(arr[i]%2!=0)
        {
            odd++;
        }
    }

    cout<<even<<" valor(es) par(es)"<<endl;
    cout<<odd<<" valor(es) impar(es)"<<endl;
    cout<<pos<<" valor(es) positivo(s)"<<endl;
    cout<<neg<<" valor(es) negativo(s)"<<endl;


}
