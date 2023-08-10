#include<iostream>
using namespace std;

int main()
{
    int mainPass = 2002;
    int givenPass;

    do
    {
        cin>>givenPass;

        if(givenPass!=mainPass)
        {
            cout<<"Senha Invalida"<<endl;
        }
        else
        {
            cout<<"Acesso Permitido"<<endl;
        }
    }
    while(givenPass != mainPass);

}
