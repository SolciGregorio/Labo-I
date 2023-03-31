//Nombre:Maria Sol Gregorio
//TP N° :1
//Ej N°:4

/* Hacer un programa para ingresar por teclado la cantidad de asientos disponibles en un avión y la cantidad
de pasajes ocupados y luego calcular e informar el porcentaje de ocupación y el porcentaje de no ocupación del mismo.*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{

    int aDisponible,aOcupados,capacidad;
    float porcOcupacion,porcDisponible;
    cout << "Cantidad de asientos disponibles: ";

    cin >>aDisponible;
    cout << "Cantidad de asientos ocupados: ";
    cin >>aOcupados;

    capacidad = aDisponible + aOcupados;
    porcOcupacion = (float)aOcupados * 100 /(float) capacidad;
    porcDisponible = (float)aDisponible * 100 / (float)capacidad;

    cout <<"porcentaje disponible:  " << porcDisponible <<"%"<< endl;
    cout <<"porcentaje ocupado:  " << porcOcupacion <<"%"<< endl;

    return 0;

}
