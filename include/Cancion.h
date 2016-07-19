

typedef struct tipoCancion{

 char* titulo;
 char* nombre_artista;
 char* duracion;
 int id;

 struct tipoCancion *siguiente;
 struct tipoCancion *anterior;

 }Cancion;
