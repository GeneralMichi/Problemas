/*
    Realice un programa donde pida al usuario un numero n
    e imprima en pantalla el numero en expresion factorial.
    Tenemos que el factorial de un numero N es N!
    lo que es igual a 
    N! = N * N-1 * N-2 * N-2 * N-4 * ... * 3 * 2 * 1
    Ejemplo
    3! = 3 * 2 * 1 = 6 
*/

#include <iostream>

using namespace std;

int main()
{
    int n;
    double f = 1;
    cout<<"Introduzca un numero: ";
    cin>>n;

    for(int i = 1; i <= n; i++)
        f *= i;
    
    cout<<n<<"! = "<<f<<endl;

    system("PAUSE");
    return 0;
}
