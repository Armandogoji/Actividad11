#include <iostream>
#include "arreglo.h"
using namespace std;

int main(){
    arreglo_dinamico arreglo;
    arreglo.insertar_final("e");
    arreglo.insertar_final("n");
    arreglo.insertar_final("o");
    arreglo.insertar_final("s");
    arreglo.insertar_final("d");
    arreglo.insertar_final("i");
    arreglo.insertar_final("a");
    arreglo.insertar_final("s");
    arreglo.insertar_inicio("u");
    arreglo.insertar_inicio("b");

    for (size_t i = 0; i < arreglo.size(); i++)
    {
        cout << arreglo[i] << " ";
    }
    
    return 0;
}