#include <iostream>
using namespace std;
#include "arreglo.h"

arreglo_dinamico::arreglo_dinamico(){
    arreglo = new string[MAX];
    cont = 0;
    tam = MAX;

}
arreglo_dinamico::~arreglo_dinamico(){

    delete[] arreglo;
}

void arreglo_dinamico::insertar_final(const string &s){
    if (cont == tam){
        expandir();         
    }
    arreglo[cont] = s;
    cont++;
}

void arreglo_dinamico::insertar_inicio(const string &s){
    if (cont == tam){
        expandir();         
    }
    for (size_t i = cont; i = 0; i--){
        arreglo[i] = arreglo[i-1];
    }
    arreglo[0] = s;
    cont++;
}

void arreglo_dinamico::expandir(){
    string *nuevo = new string[tam+MAX];

    for (size_t i = 0; i < cont; i++){
        nuevo[i] = arreglo[i];
    }
    delete[] arreglo;
    arreglo = nuevo;
    tam = tam + MAX;
}