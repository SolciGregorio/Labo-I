#include <iostream>
#include <cstdlib>
using namespace std;
int main() {

    int nC;
    int lC;
    int kV;

    int t1 = 0;
    int t2 = 0;
    int t3 = 0;
    int i =0;
    int max1=0;
    int max2=0;
    int max3=0;
    int N;

    cout << "Ingrese los datos nro de cliente: ";
    cin >> nC;
    cout << "Ingrese los datos localidad: ";
    cin >> lC;
    cout << "Ingrese los datos kilovatios: ";
    cin >> kV;

    while(N!=0){
        switch (lC){

            case 1: if (kV<100){

                i=(kV+100)*10;
            }
            else if (kV<200){

                i=(kV+100)*12;
            }
            else {

                i=(kV+100)*15;
            }

            t1=t1+=i;
        break;

            case 2: if(kV<100){

                i=(kV+100)*10;
            }
            else if (kV<200){

                i=(kV+100)*12;
            }
            else{
                i=(kV+100)*15;
            }

            t2=t2+=i;
        break;

            case 3: if (kV<100){

                i=(kV+100)*10;
            }
            else if (kV<200){

                i=(kV+100)*12;
            }
            else {
                i=(kV+100)*15;
            }
        }
            t3=t3+=i;
        break;


    cout << "Ingrese los datos nro de cliente: ";
    cin >> nC;
    cout << "Ingrese los datos localidad: ";
    cin >> lC;
    cout << "Ingrese los datos kilovatios: ";
    cin >> kV;
    }
    cout << "El monto total de la localidad 3 es: "<<t3;
    cout << "El monto total de la localidad 2 es: "<<t2;
    cout << "El monto total de la localidad 1 es: "<<t1;

    system("pause");
    return 1;
}
