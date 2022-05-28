//Hacer un programa donde se carguen 15 números enteros y luego le solicite al usuario un número e indique si el mismo pertenece a la lista cargada anteriormente.//
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int i,comparison;
    bool flag = false ;
    int number[15];
    for(i=0; i<=14; i++)
    {
        cout<<"Ingrese un numero: "<<endl;
        cin>> number[i];
    }

    cout<<"------------------"<<endl;

    cout<< "ingrese un numero para comparar  ";
    cin>> comparison;

    for (i=0; i<=14; i++)
    {
        if(comparison==number[i])

        {
            flag = true;
            cout<<"El numero pertenece a la lista ingresada"<<endl;

        }
        else
        {
            cout<<"No pertenece a la lista ingresada"<<endl;
        }

    }

    system("pause");
    return 0;
}
