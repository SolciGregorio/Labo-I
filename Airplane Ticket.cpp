#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
    int asientosDis,asientosOcup,capacidad;
    float porcOcup,porcDis;
    cout << "Cantidad de asientos disponibles: ";
    cin >>asientosDis;
    cout << "Cantidad de asientos ocupados: ";
    cin >>asientosOcup;
    capacidad = asientosDis + asientosOcup;
    porcOcup = (float)asientosOcup * 100 /(float) capacidad;
    porcDis = (float)asientosDis * 100 / (float)capacidad;

    cout <<endl;
    cout <<"porcentaje disponible:  " << porcDis << endl;
    cout <<"porcentaje ocupado:  " << porcOcup << endl;

    system("pause");
    return 1;
