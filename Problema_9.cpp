/*
    Realice un programa donde le pida al usuario ingresar el numero de filas y columnas para poder crear una matriz y de esta sacar 
    la media e imprima en pantalla la matriz ingresada, el valor de la media y la matriz nuevo con los datos de la media
*/
#include <iostream>

using namespace std;

class matriz
{
    private:
        int filas, cols;
        float **mat,media;
    public:
        matriz()
        {
            filas = cols = 0;
            media = 0.0;
            mat = new float *[1];
            *mat = new float [1];
            **mat = 0.0;
        }

        void leer()
        {
            cout<<"Introduzca el numero de filas: ";
            cin>>filas;
            cout<<"Introduzca el numero de columnas: ";
            cin>>cols;
            mat = new float *[filas];
            cout<<"\n Llene la matriz \n";
            int rn = 0;
            while (rn < filas)
            {
                *(mat+rn) = new float[cols];
                int col = 0;
                while (col < cols)
                {
                    cout<<"Dato ["<<rn + 1<<"] ["<<col + 1<<"]: ";
                    cin>>*(*(mat + rn) + col);
                    col++;
                }
                rn++;
            }
        }

        void Media()
        {
            for (int i = 0; i < filas; i++)
                for(int j = 0; j < cols; j++)
                    media +=*(*(mat + i) + j);
            media = (cols * filas);            
        }

        void Imp()
        {
            cout<<"\n Matriz ingresada \n";
            for (int i = 0; i < filas; i++)
            {
                for(int j = 0; j < cols; j++)
                    cout<<*(*(mat + i) + j)<<'\t';
                cout<<endl;   
            }       

            cout<<"\n El valor de la media es: "<<media;
            cout<<"\n La matriz de datos entre su media es: \n";  
            for (int i = 0; i < filas; i++)
            {
                for(int j = 0; j < cols; j++)
                    cout<<*(*(mat + i) + j) / media<<'\t';
                cout<<endl;   
            }  
        }

        ~matriz()
        {
            if (mat)
            {
                for(int i = 0; i < filas; i++)
                    delete mat[i];
                delete []mat;
            }
        }
};

int main()
{
    matriz m;
    m.leer();
    m.Media();
    m.Imp();
    system("PAUSE");
    return 0;
}