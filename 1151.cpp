#include<iostream>
using namespace std;

int main()
{
    int num;
    int t1 = 0;
    int t2 = 1;
    int nextTerm;

    cin>>num;

    cout<<t1<<" ";
    cout<<t2<<" ";

    for(int i = 3; i<=num; i++)
    {
        nextTerm = t1+t2;
        cout<<nextTerm;
        if(i!=num)
        {
            cout<<" ";
        }
        t1 = t2;
        t2 = nextTerm;
    }
    cout << endl;
}
