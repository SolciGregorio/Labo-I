//Nombre:Maria Sol Gregorio
//TP N° :1
//Ej N°:6
/*Comentarios: Hacer un programa para que un comercio ingrese por teclado la recaudación en pesos para cada una de las cuatro semanas del mes.
El programa debe listar la recaudación promedio por semana y el porcentaje de recaudación por semana.*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int semanaUno,semanaDos,semanaTres,semanaCuatro,totalRecaudacion;
    float RecPromedio,porcSemanaUno,porcSemanaDos,porSemanaTres,porSemanaCuatro;

    cout << "Cantidad de RECAUDACION SEMANA 'UNO': "<< endl;
    cin >>semanaUno;
    cout << "Cantidad de RECAUDACION SEMANA 'DOS': "<< endl;
    cin >>semanaDos;
    cout << "Cantidad de RECAUDACION SEMANA 'TRES': "<< endl;
    cin >>semanaTres;
    cout << "Cantidad de RECAUDACION SEMANA 'CUATRO': "<< endl;
    cin >>semanaCuatro;
    totalRecaudacion = semanaUno + semanaDos+semanaTres+semanaCuatro;
    porcSemanaUno = (float)semanaUno * 100 /(float) totalRecaudacion;
    porcSemanaDos = (float)semanaDos * 100 / (float)totalRecaudacion;
    porSemanaTres = (float)semanaTres * 100 / (float)totalRecaudacion;
    porSemanaCuatro = (float)semanaCuatro * 100 / (float)totalRecaudacion;
    RecPromedio = totalRecaudacion/4;
    cout << "Porcentaje de RECAUDACION : "<< porcSemanaUno <<"%"<< endl;
    cout << "Porcentaje de RECAUDACION : "<< porcSemanaDos <<"%"<< endl;
    cout << "Porcentaje de RECAUDACION : "<< porSemanaTres <<"%"<< endl;
    cout << "Porcentaje de RECAUDACION : "<< porSemanaCuatro <<"%"<< endl;
    cout << endl;
    cout << "EL PROMEDIO DE RECAUDACION : "<< RecPromedio << endl;45


    return 0;

}
