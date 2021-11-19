/*
    Realice un programa que le pregunte al usuario ingrese su antigueda, sueldo y sexo, 
    el programa debe de de verificar si es hombre o mujer, de ahi si es hombre 
    verificar que si tiene de 1 - 5 años darle un bono de $100, si tiene entra 5 y 10 un bono de $200
    y si tiene mas de 10 darle un bono de $300: de igual manera, si es mujer y tiene mas de 5 0 10 años darle un bono del
    10%, si no no se le da nada, al final imprimir el sueldo final, antiguedad, de cuanto fue el bono y mostrar si no se le dio
*/

#include <iostream>

using namespace std;

int main()
{
    char s;
    int a, su, b, st;

    cout<<"Ingrese su sexo m/f: ";
    cin>>s;
    cout<<"Ingrese su sueldo: ";
    cin>>su;
    cout<<"Ingrese su antiguedad: ";
    cin>>a;

    if (s == 'm')
    {
        if (a < 6 && a > 0)
        {
            st = su + 100;
        }if (a > 5 && a < 11)
        {
            st = su + 200;
        }if (a > 10)
        {
            st = su + 300;
        }
        if(a < 1)
        {
            cout << "\n Sueldo normal: " << su
                 << "\n Antiguedad: " << a
                 << "\n Sin bono\n";
        }

        cout << "\n Sueldo normal: " << su
             << "\n Antiguedad: " << a
             << "\n Sueldo con bono: " << st<<endl;
    }

    if (s == 'f')
    {
        if (a > 5 || a > 10)
        {
            st = su + ( su * 0.1 );
        } else 
        {
            cout << "\nSueldo normal: " << su
                 << "\nAntiguedad: " << a
                 << "\nSin bono\n";
        }

        cout << "\n Sueldo normal: " << su
             << "\n Antiguedad: " << a
             << "\n Sueldo con bono: " << st<<endl;
    }
    
    system("PAUSE");
    return 0;
}