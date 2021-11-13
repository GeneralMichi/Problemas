/*
    Realice un programa que pida al usuario x cantidad de alumnos, ingrese las calificaciones de cada uno.
    Muestre en pantalla el promedio de los alumnos, cuantos reprobraron y aprobaron
*/
#include <iostream>

using namespace std;

int main()
{
    system("CLS");
    
    int x, prom, sum = 0, cal, rep = 0, apr = 0;
    float prom;

    cout<<"Ingrese la cantidad de alumnos a ingresar: ";
    cin>>x;

    for (int i = 1; i <= x; i++)
    {
        cout<<"Ingrese la calificacion del alumno ["<<i<<"]: ";
        cin>>cal;

        if(cal > 5)
            rep ++;
        else
            apr ++;

        sum = sum + cal;
    }

    prom = sum / x;
    cout<<"Hay "<<rep<<" alumnos reprobados, "<<apr<<" aprobados y el promedio del grupo es: "<<prom<<endl;    

    system("PAUSE");
    return 0;
}