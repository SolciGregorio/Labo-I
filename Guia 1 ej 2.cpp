//Nombre:Maria Sol Gregorio
//TP N° :1
// Ej N°:2

/* Hacer un programa que solicite por teclado que se ingresen dos números y luego guardarlos en dos variables distintas.
 A continuación se deben intercambiar mutuamente los valores en ambas variables y mostrarlos por pantalla.*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int valorA;
    int valorB;
    int auxiliar;


    cout << "ingrese primer valor:  ";
    cin >> valorA;
    cout << "ingrese segundo valor: ";
    cin >> valorB;
    auxiliar = valorA;
    valorA = valorB;
    valorB = auxiliar;
    cout<< "el segundo valor es: "<<valorA<<endl;
    cout<< "el primer valor:: "<<valorB<<endl;

return 0;

}
