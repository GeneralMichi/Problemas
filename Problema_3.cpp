/*
    Realice una calculadora con menu para que el usuario pueda elegir la opcion que mas le convenga.
    Las operaciones son sumar, restar, multiplicar, dividir y elevar un numero a la n potencia
*/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int opc, n1 = 0, n2 = 0, nr = 0;

    cout<<"***Calculadora*** \n";
    cout<<"1.- Sumar \n"
        <<"2.- Restar \n"
        <<"3.- Multiplicar \n"
        <<"4.- Dividir \n"
        <<"5.- Elevar numero al cuadrado\n"
        <<"Digite su opcion: ";
    cin>>opc;

    switch (opc)
    {
    case 1:
        cout<<"***Suma***\n";
        cout<<"Ingrese el primer numero: ";
        cin>>n1;
        cout<<"Ingrese el segundo numero: ";
        cin>>n2;

        nr = n1 + n2;

        cout<<"El resultado de la suma es: "<<nr<<endl;
        break;
    
    case 2:
        cout<<"***Resta***\n";
        cout<<"Ingrese el primer numero: ";
        cin>>n1;
        cout<<"Ingrese el segundo numero: ";
        cin>>n2;

        nr = n1 - n2;

        cout<<"El resultado de la resta es: "<<nr<<endl;
        break;

    case 3:
        cout<<"***Multiplicacion***\n"
            <<"Ingrese el primer numero: ";
        cin>>n1;
        cout<<"Ingrese el segundo numero: ";
        cin>>n2;

        nr = n1 * n2;

        cout<<"El resultado de la multiplicacion es: "<<nr<<endl;
        break;

    case 4:
        cout<<"***Division***\n"
            <<"Ingrese el nominador: ";
        cin>>n1;
        cout<<"Ingrese el denominador: ";
        cin>>n2;

        nr = n1 / n2;

        cout<<"El resultado de la dision es: "<<nr<<endl;
        break;

    case 5:
        cout<<"***Elevar numero a la n potencia***\n"
            <<"Ingrese el numero a elevar: ";
        cin>>n1;
        cout<<"Ingrese la potencia: ";
        cin>>n2;

        nr = pow(n1, n2);

        cout<<"El numero elevado a la "<<n2<<" potencia  es: "<<nr<<endl;
        break;

    default:
        exit(1);
        break;
    }
    system("PAUSE");
    return 0;
}