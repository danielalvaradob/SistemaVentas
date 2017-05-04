#include <iostream>
#include "arbolproveedores.h"

using namespace std;

//ARBOL BINARIO DE BUSQUEDA

//+++++++++++++++++++++ Insertar Nodo +++++++++++++++++++++++

void ArbolProveedores::insertarNodoProveedor(string _id, string _nombre, string _direccion, string _telefono) {
    if(raiz==NULL){
        raiz = new NodoProveedor( _id,  _nombre,  _direccion,  _telefono);
    }else{
        raiz->insertarProveedor( _id,  _nombre,  _direccion,  _telefono);
    }
}

// funcion utilizada para verificar si ya existe un proveedor
bool ArbolProveedores::existeProveedor(string _id, NodoProveedor *_raiz){
    if(_raiz==NULL){
        return false;
    }else if (_raiz->getID() == _id) {
        return true;
    }else{

        existeProveedor(_id,_raiz->Hizq);
        existeProveedor(_id,_raiz->Hder);
    }
}

// Recorridos
void ArbolProveedores::PreordenI(NodoProveedor *R){
    if(R==NULL){
        return;
    }else{
        cout<<R->getID()<<endl;
        PreordenI(R->Hizq);
        PreordenI(R->Hder);
    }
}

void ArbolProveedores::InordenI(NodoProveedor *R){
    if(R==NULL){
        return;
    }else{
        InordenI(R->Hizq);
        cout<<R->getID()<<endl;
        InordenI(R->Hder);
    }
}

void ArbolProveedores::PostordenI(NodoProveedor *R){
     if(R==NULL){
        return;
    }else{
        PostordenI(R->Hizq);
        PostordenI(R->Hder);
        cout<<R->getID()<<"-";

    }
}
