#include<stdio.h>

int main()
{

    int num = 0;
    int temp = 0;
    double sum = 0;


    do
    {
        scanf("%d",&num);
        if(num>0)
        {
            sum+=num;
            temp++;
        }
    }
    while(num>=0);

    double avg = 0;

    avg = sum/temp;

    printf("%.2lf\n", avg);

    return 0;
}
