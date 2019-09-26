#pragma once
#include <string>
using namespace std;
class Partida
{
public:
	Partida(int cantidadMaquina, int cantidadUsuario, string resultado) :cantidadMaquina(cantidadMaquina), cantidadUsuario(cantidadUsuario), resultado(resultado) {};
	~Partida();
	int getCantidadUsuario() {
		return cantidadUsuario;
	}
	int getCantidadMaquina() {
		return cantidadMaquina;
	}
	string getResultado() {
		return resultado;
	}

private:
	int cantidadMaquina;
	int cantidadUsuario;
	string resultado;

};
