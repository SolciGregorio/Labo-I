//Hacer un programa que le pida al usuario una lista de 10 números enteros y luego de ingresarlos muestre cuáles de ellos fueron positivos.//
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    float promedio;
    int i,suma,cont = 0;
    int v[10];
    for(i=0; i<10; i++)
    {
        cout<<"INGRESE UN NUMERO: ";
        cin>>v[i];
        suma=suma+v[i];
    }
    for(i=0; i<10; i++)
    {
        if(v[i]>0)
        {
            cont++;
        }
    }
    cout<<"CANTIDAD DE VALORES POSITIVOS ES: "<<cont<<endl;


    system("pause");
return 0;
}
