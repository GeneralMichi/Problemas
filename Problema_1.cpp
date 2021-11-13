/*
    Realice un programa que lea una cadena de "N" numeros e imprima los numeros impares
    y su sumatoria
*/
#include <iostream>

using namespace std;

int main()
{
    system("CLS");

    int N, n2, j = 0, ni = 0;
    cout<<"Introduzca la cantidad de numeros a ingresar: ";
    cin>>N;
    for (int i = 0; i < N; i++)
    {
        cout<<"Ingrese un numero entero: ";
        cin>>n2;
        if (n2 % 2 != 0)
        {
            ni++;
            j += n2;
        }
    }
    cout<<"Cantidad de numero impares "<< ni <<" la sumatoria es: " << j <<endl;

    system("PAUSE");

    return 0;
}
