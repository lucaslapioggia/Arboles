#include <stdio.h>
#include <stdlib.h>
#include "arbol.c"
#include "arbol.h"

int main()
{
    int a[10]= {1,10,2,45,9,15,46,33,25,20};
    nodoArbol* arbol = inicArbol();
    for(int i=0;i<10;i++)
    {
        arbol =insertar(arbol,a[i]);
    }

    printf("PREORDER: ");
    preorder(arbol);
    printf("\nINORDER: ");
    inorder(arbol);
    printf("\nPOSTORDER: ");
    postorder(arbol);
    return 0;
}


nodoArbol *insertar(nodoArbol*arbol,int dato)
{
 if(arbol==NULL)
    arbol=crearNodoArbol(dato);
 else
 {
     if(dato>arbol->dato)
     {
      arbol->der =insertar(arbol->der, dato);
     }
     else
     {
         arbol->der =insertar(arbol->izq, dato);
     }

 }
   return arbol;
}

void preorder(nodoArbol*arbol)
{
    if(arbol !=NULL)
    {
        printf("%d", arbol->dato);
        preorder(arbol->izq);
        preorder(arbol->der);
    }
}

void inorder(nodoArbol*arbol)
{
    if(arbol!=NULL)
    {
        inorder(arbol->izq);
        printf("%d", arbol->dato);
        inorder(arbol->der);
    }
}

void postorder(nodoArbol*arbol)
{
  if(arbol!=NULL)
  {
      postorder(arbol->izq);
      postorder(arbol->der);
      printf("%d", arbol->dato);
  }

}

nodoArbol *buscar(nodoArbol *arbol, int dato)
{
    nodoArbol *rta = NULL;
    if(arbol!=NULL)
    {
        if(dato ==arbol->dato)
        {
            rta=arbol;
        }
        else {
            if(dato>arbol->dato)
            {
                rta =buscar(arbol->der, dato);
            }
            else
            {
                rta=buscar(arbol->izq,dato);
            }

            return rta;
        }
    }
}
