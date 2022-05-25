#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    float promedio;
    int i,suma,cont = 0;
    int v[50];
    for(i=0; i<50; i++)
    {
        cout<<"INGRESE UN NUMERO: ";
        cin>>v[i];
        suma=suma+v[i];
    }
    promedio=(float)suma/50;
    for(i=0; i<50; i++)
    {
        if(v[i]>promedio)
        {
            cont++;
        }
    }
    cout<<"CANTIDAD DE VALORES MAYORES AL PROMEDIO: "<<cont<<endl;


    system("pause");
return 0;
}
