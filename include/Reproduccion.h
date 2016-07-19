#ifndef REPRODUCCION_H
#define REPRODUCCION_H
#include "Cancion.h"

class Reproduccion{
private:

public:
    typedef Cancion* Inicio;
    typedef Cancion* Fin;
	Reproduccion();
	virtual ~Reproduccion();
	void agregar(Inicio inicio,int id);
    Inicio crearNodo();
	bool eliminar(Inicio inicio,int id);
	void listar(Cancion* ptr);
};



#endif // REPRODUCCION_H
