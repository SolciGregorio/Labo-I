//Nombre:Sol Gregorio
//TP N° :1
// Ej N°:1

/*Comentarios:/* Hacer un programa para ingresar por teclado la cantidad de horas
 trabajadas por un operario y el valor que se le paga por hora trabajada y listar por pantalla el sueldo que le corresponda./*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
 int cantidadHoras;
 int valorHora;
 int sueldoEmpleado;


cout << "ingrese cantidad de horas trabajadas:  ";
cin >> cantidadHoras;
cout << "ingrese el valor de la hora: ";
cin >> sueldoEmpleado;
sueldoEmpleado = cantidadHoras * sueldoEmpleado;
cout<< "el total a pagar es: "<<sueldoEmpleado;

return 0;

}
