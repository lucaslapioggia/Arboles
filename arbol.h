#ifndef ARBOL_H_INCLUDED
#define ARBOL_H_INCLUDED

struct nodoArbol;
struct nodoArbol * inicArbol();
struct nodoArbol * crearNodoArbol(int dato);
struct nodoArbol * insertar(struct nodoArbol * arbol, int dato);

#endif // ARBOL_H_INCLUDED
