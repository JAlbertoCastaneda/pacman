#include <TazoDorado.hpp>
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // int entero = 0;
    // bool booleano = true;
    // char letras = 'A';
    // float decimal = 0.5;

    // cout<<"Tamaño Entero: "<<sizeof(entero) << endl;
    // cout<<"Tamaño Booleano: "<<sizeof(booleano) << endl;
    // cout<<"Tamaño Letras: "<<sizeof(letras) << endl;
    // cout<<"Tamaño Decimal: "<<sizeof(decimal) << endl;
    // cout<<"Tamaño Tazo: "<<sizeof(TazoDorado) << endl;
    // cout<< endl;
    // TazoDorado tazo1;
    // TazoDorado tazo2;
    // cout<<"Direccion Tazo1: "<< &tazo1 << endl;
    // cout<<"Direccion Tazo2: "<< &tazo2 << endl;

    // TazoDorado tazos[20];
    // for(size_t i=0; i<20; i++)
    // {
    //     cout<< "Dirección Tazo" << i << ":" << &tazos[i] << endl;
    // }
    // void* direccion=malloc(1);
  /// C________________________________________________________________________
    TazoDorado* direccion;
    cout<<"Direccion de Direccion: "<< &direccion <<endl;
    direccion= (TazoDorado*)malloc(4);
    cout<<"Direccion Dinamica: "<< malloc(1)<<endl;
    direccion=(TazoDorado*)malloc(sizeof(TazoDorado));
    cout<<"Direccion DinamicaA: "<< direccion <<endl;
    cout<<"Direccion DinamicaB: "<< direccion + 1 <<endl;
    return 0;
    direccion->Inicializar();
    cout<<"Valor en direccion: "<< direccion-> Flotando() <<endl;

     /// C++_________________________________________________________  
    TazoDorado *direccion2;
    direccion2 = new TazoDorado();
    cout<<"Valor en direccion: "<< direccion2-> Flotando() <<endl;
}
