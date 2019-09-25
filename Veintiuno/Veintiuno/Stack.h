#pragma once
#include "CLista.h"
template<typename T>
class Stack
{
private:
	CLista*stack;

public:
	Stack(CLista * stack):stack(stack) {};
	~Stack();

	void dequeue() {
		stack->eliminaInicial();
	}
	void enqueue(T elemn) {
		stack->agregarFinal(elemn);
	}
	void limpiar() {
		stack->limpiarLista();
	}
	void estaVacia() {
		return stack->esVacia();
	}


};

