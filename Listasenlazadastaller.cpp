//Natalia Otalora, Lucas Rojas, Alejadra Rojas, Carlos Bernal
#include <iostream>
#include "Lista.h"

using namespace std;

int main() {

    Lista<int> lista;

    cout << "===== AGREGAR AL FINAL =====" << endl;

    lista.agregar(10);
    lista.agregar(20);
    lista.agregar(30);
    lista.agregar(40);

    cout << endl;

    cout << "===== RECORRER LISTA =====" << endl;
    lista.recorrer();

    cout << endl;

    cout << "===== AGREGAR AL COMIENZO =====" << endl;

    lista.agregarInicio(5);

    cout << "Lista despues de agregar 5 al comienzo:" << endl;
    lista.recorrer();

    cout << endl;

    cout << "===== BUSCAR ELEMENTOS =====" << endl;

    cout << "Buscar 20:" << endl;

    if (lista.buscar(20)) {
        cout << "El elemento existe" << endl;
    }
    else {
        cout << "El elemento no existe" << endl;
    }

    cout << endl;

    cout << "Buscar 50:" << endl;

    if (lista.buscar(50)) {
        cout << "El elemento existe" << endl;
    }
    else {
        cout << "El elemento no existe" << endl;
    }

    cout << endl;

    cout << "===== ELIMINAR AL COMIENZO =====" << endl;

    lista.eliminar(5);

    cout << "Lista despues de eliminar el primer elemento:" << endl;
    lista.recorrer();

    cout << endl;

    cout << "===== ELIMINAR ELEMENTO INTERMEDIO =====" << endl;

    lista.eliminar(20);

    cout << "Lista despues de eliminar 20:" << endl;
    lista.recorrer();

    cout << endl;

    cout << "===== ELIMINAR AL FINAL =====" << endl;

    lista.eliminar(40);

    cout << "Lista despues de eliminar el ultimo elemento:" << endl;
    lista.recorrer();

    cout << endl;

    cout << "===== ELIMINAR ELEMENTO QUE NO EXISTE =====" << endl;

    lista.eliminar(50);

    cout << endl;

    cout << "===== LISTA FINAL =====" << endl;
    lista.recorrer();

    return 0;
}
