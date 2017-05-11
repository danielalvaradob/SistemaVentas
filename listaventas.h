#ifndef LISTAVENTAS_H
#define LISTAVENTAS_H

#include "nodoventa.h"
#include "arbolcategorias.h"
#include "arbolclientes.h"
#include "arbolproductos.h"
#include "arbolsupermercados.h"
#include "arbolproveedores.h"
#include <string>
using namespace std;

class ListaVentas {
public:
    ListaVentas() {primero = NULL;}

    void insertar(NodoVenta *_venta);
    bool listaVacia() {return primero == NULL;}
    string getProveedorMasVentas(ArbolProveedores* _ListaProveedores);
    string getClienteMasCompras(ArbolClientes * _ListaClientes);
    string getProductoMasVendido(ArbolCategorias* _ListaCategorias);
    string getCategoriaMasVendida(ArbolCategorias* _ListaCategorrias);


    NodoVenta* getPrimero() {return primero;};

private:
    NodoVenta* primero;

};

#endif // LISTAVENTAS_H
