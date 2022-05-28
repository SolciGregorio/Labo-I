//Hacer un programa donde se carguen 15 números enteros//
//muestre por pantalla el mínimo elemento del vector y además //
//indique cuántas veces se repite el valor mínimo dentro del vector.//

//Hacer un programa donde se carguen 15 números enteros y luego le solicite al usuario un número e indique si el mismo pertenece a la lista cargada anteriormente.//
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int i,minimumElement;
    int number[15];
    int repetitions = 0;

// Ingreso de elementos a la lista//

    for(i=0; i<=14; i++)
    {
        cout<<"Ingrese un numero: "<<endl;
        cin>> number[i];
    }

    cout<<"------------------"<<endl;

    minimumElement=number[0];


    // Recorrido del array para averiguar el elemento mínimo y Recorrido del array para averiguar cuántas veces se repite dicho elemento//

    for (i=0; i<=14; i++)
    {
        if(number[i]<minimumElement)
        {
            minimumElement = number[i];
                if (minimumElement==number[i])
            {
                repetitions ++;
            }
        }
    }
    cout << "La cantidad de veces que se repite el valor mínimo dentro del vector es: " << repetitions;
    cout << "El elemento mínimo del vector es: " << minimumElement << endl;

    system("pause");
    return 0;
}
