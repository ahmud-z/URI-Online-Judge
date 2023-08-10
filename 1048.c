#include<stdio.h>
int main()
{
    float salary;
    float commision;

    scanf("%f",&salary);


    if(salary>=0 && salary<=400)
    {

        commision = 0.15*salary;

        printf("Novo salario: %.2f\n",(salary+commision));
        printf("Reajuste ganho: %.2f\n",commision);
        printf("Em percentual: 15 %%\n");

    }


    if( salary>= 400.01 && salary<=800)
    {
        commision = 0.12*salary;
        printf("Novo salario: %.2f\n",(salary+commision));
        printf("Reajuste ganho: %.2f\n",commision);
        printf("Em percentual: 12 %%\n");

    }

    if( salary>=800.01 && salary<=1200)
    {
        commision = 0.10*salary;
        printf("Novo salario: %.2f\n",(salary+commision));
        printf("Reajuste ganho: %.2f\n",commision);
        printf("Em percentual: 10 %%\n");

    }


    if( salary>=1200.01 && salary<=2000)
    {
        commision = 0.07*salary;
        printf("Novo salario: %.2f\n",(salary+commision));
        printf("Reajuste ganho: %.2f\n",commision);
        printf("Em percentual: 7 %%\n");

    }

    if( salary>2000)
    {
        commision = 0.04*salary;
        printf("Novo salario: %.2f\n",(salary+commision));
        printf("Reajuste ganho: %.2f\n",commision);
        printf("Em percentual: 4 %%\n");
    }

    return 0;
}
