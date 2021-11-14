/*
    Realice un programa donde el usuario introduzca una cadena de caracteres combinado con numeros
    y de este extraer e imprimir los numero y caracteres por separado
    Ejemplo:
    input:   H0l4
    output: 04 Hl
*/
#include <iostream>
#include <cstdlib>

using namespace std;

char cadena[100];
string num;
string txt;

int main()
{
    int a = 0;
    cout<<"Ingrese el texto combinando numeros y letras: ";
    cin>>cadena;
    while (a<sizeof(cadena)-1)
    {
        if (isdigit(cadena[a]))
        {
            num = num + cadena[a];
        }
        else
        {
            txt = txt + cadena[a];
        }
        a++;        
    }
    cout<<"Los numeros son: "<<num<<endl;
    cout<<"Las letras del texto son: "<<txt<<endl;

    system("PAUSE");
}