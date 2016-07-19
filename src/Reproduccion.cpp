#include "Reproduccion.h"
#include <stdio.h>
#include <iostream>

using namespace std;

Cancion *ptr;
int cont=0;
Reproduccion::Reproduccion(){}
Reproduccion::~Reproduccion(){}

void Reproduccion::agregar(Inicio inicio,int id){
 Fin nuevo;
 nuevo=(Fin)malloc(sizeof(Cancion));

 if(nuevo==NULL)

 cout<<"ERROR\n";

 nuevo->id=id;

 nuevo->siguiente=inicio;

 nuevo->anterior=inicio->anterior;

 inicio->anterior->siguiente=nuevo;

 inicio->anterior=nuevo;
 cont++;

}
bool Reproduccion::eliminar(Inicio inicio,int id){
 if (inicio != NULL) {
		Cancion *actual;
		Cancion *articulo_del;
		actual = inicio;

		for (int i = 1; i < id; ++i) {
			actual = actual->siguiente;
		}
		articulo_del = actual->siguiente;
		actual->siguiente=actual->siguiente->siguiente;
		delete (articulo_del);
	} else {
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "--La lista esta vacia--\n";
	}
return 8;
}
	//void modificar(int indice, struct Contacto contacto);

void Reproduccion::listar(Cancion * ptr){
 Cancion *p;
 int k=0;

 if(ptr!=NULL)

 {

 cout<<"Lista de elementos guardados:\n";

 p=ptr->siguiente;

 do{
 if(p->id!=0)
 cout<<p->id;

 p=p->siguiente;

 }while(p!=ptr->siguiente);
 }

 else

 {

 cout<<"No Hay elementos en la Lista\n";

 }

}

Reproduccion::Inicio Reproduccion::crearNodo(){
 Inicio L;

 L=(Inicio)malloc(sizeof(Cancion));

 if(L==NULL);

 cout<<"Error, memoria Insuciente\n";

 L->siguiente=L->anterior=L;

 return L;
}


