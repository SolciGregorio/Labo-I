/* Hacer un programa para ingresar por teclado la cantidad de horas trabajadas por un operario y
el valor que se le paga por hora trabajada y listar por pantalla el sueldo que le corresponda. */

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
 int valorA;
 int valorB;
 int auxiliar;
// int resultado;
 
 
cout << "ingrese primer valor:  ";
cin >> valorA;
 cout << "ingrese segundo valor: ";
cin >> valorB;
auxiliar = valorA;
valorA = valorB;
valorB = auxiliar;
//sueldoEmpleado = cantidadHoras * sueldoEmpleado;
cout<< "el segundo valor es: "<<valorA<<endl;
cout<< "el primer valor:: "<<valorB<<endl;
 
return 0;

}
