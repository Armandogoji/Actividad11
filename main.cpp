#include <iostream>
#include "arreglo.h"
using namespace std;

int main(){
    arreglo_dinamico arreglo;
    arreglo.insertar_final("o");
    arreglo.insertar_final("l");
    arreglo.insertar_final("a");
    arreglo.insertar_inicio("h");
    
    return 0;
}