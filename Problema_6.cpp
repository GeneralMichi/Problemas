/*
    Relice un programa que genere numeros aleatorios (del 1 a 10),
    y de estos saque la media, mediana y moda
*/
#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

using namespace std;

int main ()
{
    int arreglo[10] = {0}, f[10] = {0}, x, c1 = 0, c2 = 0, mod = 0;
    float Prom = 0.0;

    srand(time(NULL));
    std::cout<<"moda,media,mediana"<<endl;
    for (int i=0;i<10;i++)
    {
        arreglo[i]= 1 + rand() % (11 -1);
        std::cout<<arreglo[i]<<"\t";
    }
    cout<<endl;
    //Ordenamiento burbuja
    for (int j = 0; j < 10; j++)
    {
        for (int k = 0; k < (10 - j); k++)
        {
            if (arreglo[k - 1] > arreglo[k])
            {
                x = arreglo[k - 1];
                arreglo[k - 1] = arreglo[k];
                arreglo[k] = x;
            }
            
        }

    }
    
    //Impresion del arreglo ordenado
    for(int i = 0; i < 10; i++)
        cout<<arreglo[i]<<"\t";    
 
/*
    //Odena los datos del array
    for(int j=0;j<10;j++)
    {
        for(int k=0;k<10;k++)
        {
            if(arreglo[j]>arreglo[k])
            {
            x=arreglo[k];
            arreglo[k]=arreglo[j];
            arreglo[j]=x;
            }
        }
    }
    std::cout<<"\n";
    //Calcula moda
    for(int l=9;l>=0;l--)
    {
        std::cout<<arreglo[l]<<" ";
        f[arreglo[l]]++;
        
        for(int m=9; m>=0;m--)
        {
            if (f[m]>auxm)
            {
                auxm=f[m];
                mod=m;
            }
        }
    }
*/
    //Calcula el promedio
    for(int b = 0; b < 10;b++)
        Prom += arreglo[b];

    //Calcula lamoda
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
            if (arreglo[i] == arreglo[j] && i != j)c1++;    

        if (c1 > c2)
        {
            c2 = c1;
            mod = arreglo[i];
        }

        c1 = 0;        
    }
    

    std::cout<<"\n Media: "<<Prom/10;
    std::cout<<"\n Mediana: "<<arreglo[5]<<" "<<arreglo[4];
    std::cout<<"\n Moda: "<<mod<<endl;

    system("PAUSE");
    return 0;
}