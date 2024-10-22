#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int entero = 0;
    bool booleano = true;
    char letras = 'A';
    float decimal = 0.5;

    cout<<"Tamaño Entero: "<<sizeof(entero) << endl;
    cout<<"Tamaño Booleano: "<<sizeof(booleano) << endl;
    cout<<"Tamaño Letras: "<<sizeof(letras) << endl;
    cout<<"Tamaño Decimal: "<<sizeof(decimal) << endl;
   

    return 0;
}
