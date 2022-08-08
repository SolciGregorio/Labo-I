/* Hacer un programa para ingresar por teclado la cantidad de asientos disponibles en un avión y la cantidad 
de pasajes ocupados y luego calcular e informar el porcentaje de ocupación y el porcentaje de no ocupación del mismo.. */

#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
    int alfajorA,alfajorB,alfajorC,totalGeneral;
    float porcAlfajorA,porcAlfajorB,porcAlfajorC;
    cout << "Cantidad de Alfajores marca 'A': ";
    cin >>alfajorA;
    cout << endl;
    cout << "Cantidad de Alfajores marca 'B': ";
    cin >>alfajorB;
    cout << endl;
    cout << "Cantidad de Alfajores marca 'C': ";
    cin >>alfajorC;
    cout << endl;
    totalGeneral = alfajorA + alfajorB+alfajorC;
    porcAlfajorA = (float)alfajorA * 100 /(float) totalGeneral;
    porcAlfajorB = (float)alfajorB * 100 / (float)totalGeneral;
    porcAlfajorC = (float)alfajorC * 100 / (float)totalGeneral;
    

    cout <<endl;
    cout << "Porcentaje de Alfajores marca 'A': "<< porcAlfajorA <<"%"<< endl;;
	cout << endl;
    cout << "Porcentaje de Alfajores marca 'B': "<< porcAlfajorB <<"%"<< endl;;
    cout << endl; 
    cout << "Porcentaje de Alfajores marca 'C': "<< porcAlfajorC <<"%"<< endl;;
    cout <<"----------------------------------------------------------------  ";

    system("pause");
    return 0;
}
