#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
int N ;
int Max = N;
int contneg = 0;

cout<<"ingresar un numero;   ";
cin>>N;
    while(N !=0){
        if (N>Max){
        Max = N;
        }

     cout<<"ingresar un numero;   ";
    cin>>N;

   }
   cout<<"El maximo es:     "<<Max; "\n";
    
    system("pause");
    return 1;

}
