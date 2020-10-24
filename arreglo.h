#ifndef ARREGLO_H
#define ARREGLO_H

#include <iostream>
using namespace std;

class arreglo_dinamico{
    private:
    string *arreglo;
    size_t tam;
    size_t cont;
    const static size_t MAX = 5;
    void expandir();
    public:
    arreglo_dinamico();
    ~arreglo_dinamico();
    void insertar_final(const string &s);
    void insertar_inicio(const string &s);
    size_t size();
    string operator[](size_t p){
        return arreglo[p];
    }
};

#endif