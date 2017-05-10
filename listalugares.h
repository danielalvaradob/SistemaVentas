#ifndef LISTALUGARES_H
#define LISTALUGARES_H

#include <iostream>
#include "nodolugar.h"
using namespace std;


//LISTA CIRCULAR DOBLE

class ListaLugares {
public:
    ListaLugares() {primero = actual = NULL;}

    bool listaVacia() {return primero == NULL;}

    int largoLista();
    void insertarLugar(int _codigo, string _nombre);
    bool existeLugar(int _codigo);

private:
    NodoLugar* primero;
    NodoLugar* actual;

};

#endif // LISTALUGARES_H
