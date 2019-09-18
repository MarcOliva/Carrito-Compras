#pragma once
#include <iostream>
#include <functional>
using namespace std;
template <typename T>
class CLista {
	struct Nodo {
		Nodo*sig;
		T value;
		Nodo(T value = nullptr, Nodo*sig = nullptr) :value(value), sig(sig) {};
	};
	Nodo*ini;
	int lengh;
public:
	CLista() :ini(nullptr), lengh(0) {};
	int longitud() {
		return lengh;
	}
	bool esVacia() {
		return lengh == 0;
	}
	void agregarInicial(T elem) {
		if (lengh == 0)
		{
			ini = new Nodo(elem);
			lengh++;
		}
		else
		{
			ini = new Nodo(elem, ini);
			lengh++;
		}
	}

	void agregarPos(T elem, int posi) {
		if (posi == 0)
		{
			agregarInicial(elem);
			lengh++;
		}
		else {
			if (posi > 0)
			{
				Nodo* aux = ini;
				Nodo* aux2 = new Nodo(elem);
				for (int i = 1; i < posi; i++)
				{
					aux = aux->sig;
				}
				aux2->sig = aux->sig;
				aux->sig = aux2;
				lengh++;

			}
		}
	}
	void agregarFinal(T elem) {
		agregarPos(elem, lengh);
	}
	void modificarInicial(T elem) {
		ini->value = elem;
	}
	void modificarPos(T elem, int posi) {
		if (posi > lengh)return;
		if (posi == 0)
		{
			modificarInicial(elem);
		}
		else {
			if (posi > 0)
			{
				Nodo* aux = ini;
				for (int i = 1; i < posi; i++)
				{
					aux = aux->sig;
				}

				aux->value = elem;

			}
		}
	}
	void moficarFinal(T elem) {
		modificarPos(elem, lengh);
	}
	void eliminaInicial() {
		Nodo* aux = ini;
		ini = aux->sig;
		delete aux;
		lengh--;

	}
	void eliminaPos(int posi) {
		if (posi > lengh)return;
		if (posi == 0)
		{
			eliminaInicial();
		}
		else
		{
			if (posi > 0)
			{
				Nodo* aux = ini;
				for (int i = 1; i < posi; i++)
				{
					aux = aux->sig;
				}

				Nodo *aux2 = aux->sig;
				aux->sig = aux2->sig;
				delete aux2;
				lengh--;
			}
		}

	}
	void eliminarFinal() {
		eliminaPos(lengh);
	}
	T obtenerInicial() {
		return ini->value;
	}
	T obtenerPos(int posi) {
		if (posi > lengh)return 0;
		if (posi == 0)
		{
			return obtenerInicial();

		}
		else {
			if (posi > 0)
			{
				Nodo* aux = ini;
				for (int i = 1; i < posi; i++)
				{
					aux = aux->sig;
				}

				return aux->value;
			}
		}
	}
	T obtenerFinal() {
		return obtenerPos(lengh - 1);
	}
	
	void limpiarLista() {

	}

};

