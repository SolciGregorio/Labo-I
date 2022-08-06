/* Un comercio vende tres marcas de alfajores distintas A, B y C. Hacer un programa para ingresar por teclado la cantidad de alfajores 
vendidos de cada una de las tres marcas y luego se informe el porcentaje de ventas para cada una de ellas... */

#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
    int AlfajorUno,AlfajorDos,AlfajorTres,totalGeneral;
    float porcAlfajorUno,porcAlfajorDos,porcAlfajorTres;
    cout << "Cantidad de Alfajores marca 'A': ";
    cin >>AlfajorUno;
    cout << endl;
    cout << "Cantidad de Alfajores marca 'B': ";
    cin >>AlfajorDos;
    cout << endl;
    cout << "Cantidad de Alfajores marca 'C': ";
    cin >>AlfajorTres;
    cout << endl;
    totalGeneral = AlfajorUno + AlfajorDos+AlfajorTres;
    porcAlfajorUno = (float)AlfajorUno * 100 /(float) totalGeneral;
    porcAlfajorDos = (float)AlfajorDos * 100 / (float)totalGeneral;
    porcAlfajorTres = (float)AlfajorTres * 100 / (float)totalGeneral;
    

    cout <<endl;
    cout << "Porcentaje de Alfajores marca 'A': "<< porcAlfajorUno <<"%"<< endl;;
	cout << endl;
    cout << "Porcentaje de Alfajores marca 'B': "<< porcAlfajorDos <<"%"<< endl;;
    cout << endl; 
    cout << "Porcentaje de Alfajores marca 'C': "<< porcAlfajorTres <<"%"<< endl;;
    cout <<"----------------------------------------------------------------  ";

    system("pause");
    return 0;
}
