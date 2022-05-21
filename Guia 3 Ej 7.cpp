#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
    int pos = 0;
    int neg = 0;
    int cer = 0;
    int num;

  for (int i= 0 ; i < 10; i++){
    cout << "ingrese un numero:   ";
     cin >> num;

      if(num >= 1){
        pos ++;
        }
      else if (num<0){
        neg ++;
        }else {
        cer ++;}

cout<< "Positive " << pos<<"\n";
cout<< "Negative " <<neg<<"\n";
cout<< "Cero " <<cer<<"\n";
}
    system("pause");
    return 1;
