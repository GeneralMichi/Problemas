/*
    Realice un programa donde el usuario introduzca su edad, y su calificacion,
    si este tiene un promedio de 8 quiere decir que paso y si tiene entre 18 y 50 años;
    si cumple con estos dos requisitos mostrar en pantalla que es aceptado junto con la edad y su promedio,
    de igual forma si no lo cumple mostrar que fue rechazado y un mensaje diciendo el porque 
*/
#include <iostream>

using namespace std;

int main()
{
    int p1,p2,e,prom;
    
    cout<<"Ingrese su calificacion 1: ";
    cin>>p1;
    cout<<"Ingrese su calificacion 2: ";
    cin>>p2;
    cout<<"Ingrese su edad: ";
    cin>>e;

    prom = (p1 + p2) / 2;

    if (prom >= 8 && e  >= 18 && e <= 50)
    {
        cout<<"Usted ah sido aceptado\n"
            <<"Su promedio fue de: "<<prom<<endl;
    }
    if (e < 18 && e > 50)
    {
        cout<<"Ah sido rechazado\n"
            <<"Motivo: No cumple con la edad\n";
    }
    
    if(prom < 8)
    {
        cout<<"Ah sido rechazado\n"
            <<"Motivo: No cumple con el promedio\n";
    }
    

    system("PAUSE");
    return 0;
}