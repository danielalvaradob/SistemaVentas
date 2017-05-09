#ifndef NODOSUPERMERCADO_H
#define NODOSUPERMERCADO_H
#include "arbolsupermercados.h"
#include "arbolcategorias.h"
#include <string>
using namespace std;

class NodoSupermercado
{
public:
    NodoSupermercado(string _codSuper,string _codLugar, string _nombre );


    void insertarNodo(string _codSuper,string _codLugar, string _nombre );


    void aumentarVentas() {cantidadVentas++;}
    int obtenerValor();
    string obtenerCodSuper() {return codSuper;}
    string getCodLugar() {return codLugar;}
    string getNombre() {return nombre;}
    int getCantidadVentas() {return cantidadVentas;}

    NodoSupermercado *Hizq, *Hder;
    ArbolCategorias* Categorias;
    int FB;


private:
    string  nombre;
    string  codSuper;
    string  codLugar;
    int cantidadVentas;

    friend class ArbolCategorias;
    friend class ArbolSupermercados;
};

#endif // NODOSUPERMERCADO_H
