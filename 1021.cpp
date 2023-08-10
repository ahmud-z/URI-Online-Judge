#include<iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{

    int qu1,qu2;

    double notas[]= {100, 50, 20, 10, 5, 2};

    double modeas[]= {1,0.50,0.25,0.10,0.05,0.01};

    double N;

    cin>> N;

    cout<<"NOTAS:" <<endl;

    for(int i=0; i<6; i++)
    {
        qu1= N/notas[i];
        N-=qu1*notas[i];
        cout << qu1 << " nota(s) de R$ " << fixed << setprecision(2)<< notas[i]<< endl;

    }


    cout<<endl;
    cout<<N<<endl;
    cout<<endl;

    cout << "MOEDAS:" <<endl ;

    for(int i=0; i<6; i++)
    {
        qu2=N/modeas[i];
        N-=qu2*modeas[i];
        cout << qu2 << " moeda(s) de R$ " <<fixed << setprecision(2)<< modeas[i]<<endl;
    }

    return 0;
}

