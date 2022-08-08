	/* Hacer un programa para que un comercio ingrese por teclado la recaudación en pesos para cada una de las cuatro semanas del mes. 
El programa debe listar la recaudación promedio por semana y el porcentaje de recaudación por semana.
Ejemplo. Si se ingresa $ 1600, $ 1200, $ 4800 y $ 400 se listara como recaudación promedio $ 2000 y como porcentajes por semana: 20%, 15%, 60% y 5%.
.. */

#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
    int semanaUno,semanaDos,semanaTres,semanaCuatro,totalRecaudacion;
    float RecPromedio,porcSemanaUno,porcSemanaDos,porSemanaTres,porSemanaCuatro;
    
    cout << "Cantidad de RECAUDACION SEMANA 'UNO': ";
    cin >>semanaUno;
    cout << endl;
    cout << "Cantidad de RECAUDACION SEMANA 'DOS': ";
    cin >>semanaDos;
    cout << endl;
    cout << "Cantidad de RECAUDACION SEMANA 'TRES': ";
    cin >>semanaTres;
    cout << endl;
    cout << "Cantidad de RECAUDACION SEMANA 'CUATRO': ";
    cin >>semanaCuatro;
    cout << endl;
    totalRecaudacion = semanaUno + semanaDos+semanaTres+semanaCuatro;
    porcSemanaUno = (float)semanaUno * 100 /(float) totalRecaudacion;
    porcSemanaDos = (float)semanaDos * 100 / (float)totalRecaudacion;
    porSemanaTres = (float)semanaTres * 100 / (float)totalRecaudacion;
    porSemanaCuatro = (float)semanaCuatro * 100 / (float)totalRecaudacion;
    RecPromedio = totalRecaudacion/4;

    cout << "Porcentaje de RECAUDACION : "<< porcSemanaUno <<"%"<< endl;
	  cout << endl;
    cout << "Porcentaje de RECAUDACION : "<< porcSemanaDos <<"%"<< endl;
    cout << endl; 
    cout << "Porcentaje de RECAUDACION : "<< porSemanaTres <<"%"<< endl; 
    cout << endl; 
    cout << "Porcentaje de RECAUDACION : "<< porSemanaCuatro <<"%"<< endl;
	  cout << endl; 
	  cout << "EL PROMEDIO DE RECAUDACION : "<< RecPromedio << endl;
	  cout << endl; 
	  cout << "EL PROMEDIO DE RECAUDACION : "<< RecPromedio << endl;
	  cout << endl; 
    cout <<"----------------------------------------------------------------  ";

    system("pause");
    return 0;
}
