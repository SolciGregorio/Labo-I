#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int docket,exam,studentCounter,score,type,docketOld,grouping,scoreAccumulator;
    float total;
    docketOld= 0;
    grouping = 0;
    cout<<"ingresar legajo:  " << endl;
    cin>> docket;
    while (docket!=0)
    {
        scoreAccumulator = 0;
        studentCounter = 0;
        docketOld = docket;

        while (docket==docketOld)
        {
            cout<<"ingresar tipo de examen (1 o 2 ):  " << endl;
            cin>>exam;

            cout<<"ingresar calificacion:  " << endl;
            cin>>score;

            studentCounter = studentCounter+1;
            scoreAccumulator = scoreAccumulator+score;

            cout<<"ingresar legajo:  " << endl;
            cin>> docket;

        }

        total = (float)scoreAccumulator/(float)studentCounter;
        cout<<"el promedio es : " << total;
        //cout<<"la cantidad : " << studentAccumulator;
    }
    system("pause");
    return 0;
}

