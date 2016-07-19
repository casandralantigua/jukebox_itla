#include "Reproduccion.h"
#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
  Reproduccion* lista = new Reproduccion();
  Reproduccion:: Inicio cabeza;
  cabeza=lista->crearNodo();
  int entrada1;
  cin>>entrada1;
  lista->agregar(cabeza,entrada1);
     int entrada2;
  cin>>entrada2;
  lista->agregar(cabeza,entrada2);
     int entrada3;
  cin>>entrada3;
  lista->agregar(cabeza,entrada3);
     /*int entrada4;
  cin>>entrada4;
    cout<<lista->eliminar(cabeza,entrada3);*/
  lista->listar(cabeza);


}
