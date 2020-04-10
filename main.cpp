#include <iostream>
#include <ctime>
#include <time.h>
#include <windows.h>

using namespace std;

int main()
{
    unsigned long long wybor;
    unsigned long long dl;
    unsigned long long ciag[10000];
    unsigned long long i;
    unsigned long long j;
    unsigned long long liczba;


    cout<<"1 - Caly ciag fibonacciego"<<endl;
    cout<<"2 - Wybrana liczba z ciagu fibonacciego"<<endl;
    cout<<endl;
    cout<<"Wybierz: ";
    cin>>wybor;
    cout<<"--------------------------------------------------------------------------------"<<endl;

    if(wybor==1)
    {
        zla_liczba:;
        cout<<"Ile liczb z ciagu chcesz zobaczyc (max 250): ";
        cin>>dl;

        if(dl>250)
        {
            cout<<"Podales za duza liczbe"<<endl;
            goto zla_liczba;
        }

        ciag[0]=0;
        ciag[1]=1;
        cout<<ciag[0]<<" ";
        cout<<ciag[1]<<" ";

        for(j=2;j<dl;j++)
        {
            ciag[j]=ciag[j-1]+ciag[j-2];
            cout<<ciag[j]<<" ";
        }
    }
    else if(wybor==2)
    {
        ciag[0]=0;
        ciag[1]=1;
        for(j=2;j<250;j++)
        {
            ciag[j]=ciag[j-1]+ciag[j-2];
        }
        zla_liczba1:;
        cout<<"Ktora liczbe z ciagu chcesz zobaczyc(F0=0, F1=1, F2=1, F3=2, F4=3...)(max F249): ";
        cin>>liczba;
        if(liczba>249)
        {
            cout<<"Podales za duza liczbe"<<endl;
            goto zla_liczba1;
        }
        cout<<ciag[liczba]<<endl;
    }

    Sleep(9000);




    return 0;
}
