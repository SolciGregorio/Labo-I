#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int n, i, pos;
    pos=0;

    for (i = 0; i <= 10; i++){
        cout<<"ingrese un numero:  ";
        cin>>n;
        if(n>0)
        {
            pos++;
        }
}

   cout << "La cantidad de positivos es: "<<pos <<endl;

  system("pause");
    return 0;
}
