// Banknotes

#include<iostream>
using namespace std;

int main()
{

    int amount;

    cin>>amount;

    int note_100 = 0;
    int note_50 = 0;
    int note_20 = 0;
    int note_10 = 0;
    int note_5 = 0;
    int note_2 = 0;
    int note_1 = 0;

    int remain = 0;
    int result = 0;

    result = (amount/100);
    remain = (amount%100);
    note_100 = result;

    cout<<amount<<endl;
    cout<<note_100<<" nota(s) de R$ 100,00"<<endl;

    result = (remain/50);
    remain = (remain%50);
    note_50 = result;

    cout<<note_50<<" nota(s) de R$ 50,00"<<endl;

    result = (remain/20);
    remain = (remain%20);
    note_20 = result;

    cout<<note_20<<" nota(s) de R$ 20,00"<<endl;

    result = (remain/10);
    remain = (remain%10);
    note_10 = result;

    cout<<note_10<<" nota(s) de R$ 10,00"<<endl;

    result = (remain/5);
    remain = (remain%5);
    note_5 = result;

    cout<<note_5<<" nota(s) de R$ 5,00"<<endl;

    result = (remain/2);
    remain = (remain%2);
    note_2 = result;

    cout<<note_2<<" nota(s) de R$ 2,00"<<endl;

    result = (remain/1);
    remain = (remain%1);
    note_1 = result;

    cout<<note_1<<" nota(s) de R$ 1,00"<<endl;

    cout<<endl;
    cout<<remain<<endl;

    return 0;
}

