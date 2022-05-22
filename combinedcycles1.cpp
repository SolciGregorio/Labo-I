#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int i,months,numberOfStudents,courseNumber, studentAccumulator = 0;

    for (i=1; i<=12; i++){
        for (i=1; i<=7; i++){
            cout<<"ingresar mes:  " << endl;
            cin>> months;

            cout<<"ingresar cantidad  de alumnos:  " << endl;
            cin>>numberOfStudents;

            cout<<"ingresar numero de curso:  " << endl;
            cin>>courseNumber;

            studentAccumulator= studentAccumulator+numberOfStudents;
        }
        cout<<"la cantidad mes : " << studentAccumulator;
        cout<<"la cantidad : " << studentAccumulator;
      }
    system("pause");
    return 0;
}
