#ifndef LISTA_H
#define LISTA_H

#include <iostream>
#include "Nodo.h"

using namespace std;

template<class T>
class Lista {
private:
    Nodo<T>* raiz;

public:
    Lista() {
        raiz = NULL;
    }

    void agregar(T valor) {
        Nodo<T>* nuevo = new Nodo<T>(valor);

        if (raiz == NULL) {
            raiz = nuevo;
        }
        else {
            Nodo<T>* aux = raiz;

            while (aux->siguiente != NULL) {
                aux = aux->siguiente;
            }

            aux->siguiente = nuevo;
        }
    }

    void agregarInicio(T valor) {
        Nodo<T>* nuevo = new Nodo<T>(valor);

        nuevo->siguiente = raiz;
        raiz = nuevo;
    }

    void recorrer() {
        Nodo<T>* aux = raiz;

        while (aux != NULL) {
            cout << aux->dato << endl;
            aux = aux->siguiente;
        }
    }

    bool buscar(T valor) {
        Nodo<T>* aux = raiz;

        while (aux != NULL) {
            if (aux->dato == valor) {
                return true;
            }

            aux = aux->siguiente;
        }

        return false;
    }

    void eliminar(T valor) {
        if (raiz == NULL) {
            cout << "La lista esta vacia" << endl;
            return;
        }

        if (raiz->dato == valor) {
            Nodo<T>* aux = raiz;
            raiz = raiz->siguiente;
            delete aux;
            cout << "Elemento eliminado" << endl;
            return;
        }

        Nodo<T>* aux = raiz;

        while (aux->siguiente != NULL) {
            if (aux->siguiente->dato == valor) {
                Nodo<T>* eliminar = aux->siguiente;
                aux->siguiente = eliminar->siguiente;
                delete eliminar;
                cout << "Elemento eliminado" << endl;
                return;
            }

            aux = aux->siguiente;
        }

        cout << "El elemento no existe en la lista" << endl;
    }
};

#endif
