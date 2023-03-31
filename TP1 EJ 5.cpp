//Nombre:Maria Sol Gregorio
//TP N° :1
//Ej N°:5

/* Un comercio vende tres marcas de alfajores distintas A, B y C. Hacer un programa para ingresar por teclado la cantidad de alfajores vendidos de cada una de las tres marcas
y luego se informe el porcentaje de ventas para cada una de ellas.*/



#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{

int alfajorA,alfajorB,alfajorC,totalGeneral;
    float porcAlfajorA,porcAlfajorB,porcAlfajorC;
    cout << "Cantidad de Alfajores marca 'A': ";
    cin >>alfajorA;
    cout << "Cantidad de Alfajores marca 'B': ";
    cin >>alfajorB;
    cout << "Cantidad de Alfajores marca 'C': ";
    cin >>alfajorC;
    totalGeneral = alfajorA + alfajorB+alfajorC;
    porcAlfajorA = (float)alfajorA * 100 /(float) totalGeneral;
    porcAlfajorB = (float)alfajorB * 100 / (float)totalGeneral;
    porcAlfajorC = (float)alfajorC * 100 / (float)totalGeneral;


    cout <<endl;
    cout << "Porcentaje de Alfajores marca 'A': "<< porcAlfajorA <<"%"<< endl;
    cout << "Porcentaje de Alfajores marca 'B': "<< porcAlfajorB <<"%"<< endl;
    cout << "Porcentaje de Alfajores marca 'C': "<< porcAlfajorC <<"%"<< endl;;
    cout <<"----------------------------------------------------------------  ";

    return 0;

}
