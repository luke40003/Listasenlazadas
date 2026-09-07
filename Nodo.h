#ifndef NODO_H
#define NODO_H

template<class T>
class Nodo {
public:
    T dato;
    Nodo<T>* siguiente;

    Nodo(T valor) {
        dato = valor;
        siguiente = NULL;
    }
};

#endif
