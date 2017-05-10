#ifndef ARBOLPRODUCTOS_H
#define ARBOLPRODUCTOS_H

#include <string>
#include "nodoproducto.h"
using namespace std;
//ARBOL AA

class ArbolProductos
{
public:

    NodoProducto* raiz;

    ArbolProductos():raiz(NULL){}
    //Funcion utilizada para ir agregando nodos
    void buscar(int _codigoProducto, int _codigoCategoria, string _nombreProducto, double _precioPorUnidad, int _cantidadEnStock);
    void girar(NodoProducto  *temp);   //se utiliza skew en ingles
    bool dividir(NodoProducto  *temp); //se utiliza split en ingles
    void balancear(NodoProducto * temp);  //se utiliza rebal en ingles
    NodoProducto* insertarNodo(NodoProducto * temp, NodoProducto * ins); // se utiliza insert en ingles
    void print(NodoProducto*H);

    void preordenI(NodoProducto *R); //funcion utilizada para recorrer el arbol e ir imprimiendo en preorden la info




};

#endif // ARBOLPRODUCTOS_H
