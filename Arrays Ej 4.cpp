//Se dispone de las ventas de un negocio durante el mes pasado. Por cada venta se registró el número de venta, el número de día y el importe de la venta.
//El fin de la carga de datos se indica con número de venta igual a 0.
//Se pide calcular e informar:
//Por cada día, la recaudación total (sólo de aquellos días que tuvieron recaudación).
//El número de día que más se recaudó en total y cuál fue la recaudación máxima.
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    float valorVenta, recaudacionMax;
    int i,numVenta,dia,maxDia;
    float recaudDiaria[31]= {};

    cout<<"INGRESE EL CODIGO DE VENTA (NUMERO) : ";
    cin>>numVenta;

    while(numVenta!=0)
    {
        cout << "ingrese el día: ";
        cin >> dia;
        cout << "ingrese el importe de la venta: ";
        cin >> valorVenta;

        recaudDiaria[dia-1]+=valorVenta;

        cout << "--------------------" << endl;

        cout << "INGRESE EL CODIGO DE VENTA (NUMERO) : ";
        cin >> numVenta;
    }
    recaudacionMax=recaudDiaria[0];
    maxDia=0+1;

    for(i=0; i<=31; i++)
    {
        if(recaudDiaria[i]>recaudacionMax)
        {
            recaudacionMax=recaudDiaria[i];
                maxDia=i+1;        }
        if(recaudDiaria[i]>0)
        {
            cout << "Recaudación del día " << i+1 << " fue de $" << recaudDiaria[i] << "." << endl;
        }
    }
//se pone fuera de los ciclos porque muestra info general
    cout << "El día que más se recaudó fue el " << maxDia << " y se recaudó un total de $" << recaudacionMax << "." << endl;

system("pause");

    return 0;
}
