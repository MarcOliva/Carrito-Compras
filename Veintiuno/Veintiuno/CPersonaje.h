#pragma once
#include "Personaje.h"
#include "CLista.h"
#include <iostream>
using namespace std;
class CPersonaje
{
public:
	CPersonaje();
	~CPersonaje();
	CLista<Personaje*> GetAtrPersonaje();
	void Ingresar(int numero_carta);
	void Limpiar();

private:
	CLista<Personaje*> atrPersonaje;
};

CPersonaje::CPersonaje()
{
}

CPersonaje::~CPersonaje()
{
}
CLista<Personaje*> CPersonaje::GetAtrPersonaje() {
	return this->atrPersonaje;
}
void CPersonaje::Ingresar(int numero_carta) {
	Personaje *obj = new Personaje(numero_carta);
	atrPersonaje.agregarFinal(obj);

}
void CPersonaje::Limpiar() {
	atrPersonaje.limpiarLista();
}