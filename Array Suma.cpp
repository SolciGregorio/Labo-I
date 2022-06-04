//suma de los elementos internos del vector
#include <iostream>
#include <cstdlib>
#include <conio.h>
using namespace std;

int main()
{
    int suma;
    float vectorEntero[]= {4,9,7,2,5};

    for(int i=0; i<5; i++)
    {
        suma += vectorEntero[i] ;
    }
    cout <<"La suma de los elementos es : "<<suma<<endl;

   //hace que el programa no se cierre 
    getch();
    
    return 0;
}
