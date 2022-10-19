struct nodoArbol
{
    int dato;
    struct nodoArbol *izq;
    struct nodoArbol *der;
};

struct nodoArbol * inicArbol()
{
    return NULL;
}

struct nodoArbol * crearNodoArbol(int dato)
{
    struct nodoArbol * aux = (struct nodoArbol *) malloc(sizeof ( struct nodoArbol ) );
    aux->dato=dato;
    aux->der=NULL;
    aux->izq=NULL;
    return aux;
}

struct nodoArbol * insertar(struct nodoArbol * arbol, int dato)
{
    if(arbol==NULL)
        arbol = crearNodoArbol(dato);
    else
    {
        if(dato>arbol->dato)
        {
            arbol->der = insertar(arbol->der, dato);
        }
        else
        {
            arbol->izq = insertar(arbol->izq, dato);
        }

    }
    return arbol;
}
