//Six Odd Numbers

#include<iostream>
using namespace std;

int main()
{
    int x;

    cin>>x;

    if(x%2==0)
    {
        x += 1;

        for(int i = 0; i<6; i++)
        {
            cout<<x<<endl;
            x = x + 2;
        }
    }

    else
    {
        for(int i = 0; i<6; i++)
        {
            cout<<x<<endl;
             x = x + 2;
        }
    }

    return 0;
}

/*
int main()
{
    int n;

    scanf("%d", &n);

    int inc = (n % 2 == 0) ? 1 : 2;
    int range = (inc == 1) ? 6 : 5;

    for(int i = 1; i <= range; i++)
    {
        if(inc == 2 && i == 1)
        {
            printf("%d\n", n);
        }

        if(i == 1)
        {
            printf("%d\n", n += inc);
        }
        else
        {
            printf("%d\n", n += 2);
        }
    }

}*/
