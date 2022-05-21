#include <iostream>
#include <cstdlib>
using namespace std;
//Una concesionaria de autos paga a los vendedores un sueldo fijo de $ 15.000 más $ 2.000 de premio por cada auto vendido.//
//Hacer un programa que permita ingresar por teclado la cantidad de autos vendidos por un vendedor y luego informar por pantalla el sueldo total a pagar.//
int main() {

float ventaAutos;
float sueldoFijo;

    cout << "ingrese cantidad de autos vendidas: ";
    cin >> ventaAutos;

    sueldoFijo = 15000;
    ventaAutos = (ventaAutos*2000);

    cout << "El valor de la comision por venta de autos es: ";

    cout << ventaAutos
     << "\n";

    cout << "El sueldo total a abonar es: "
    <<sueldoFijo+ventaAutos
    << "\n";




    system("pause");
    return 1;

}
