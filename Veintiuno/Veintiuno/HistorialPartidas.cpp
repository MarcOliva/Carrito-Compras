#include "HistorialPartidas.h"
#include "Partida.h"
#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<fstream>
using namespace std;

void EscribirHistorial();
void LeerHistorial();
void ModificarHistorial();

int main() {
	EscribirHistorial();
	LeerHistorial();
	ModificarHistorial();

	system("pause");
	return 0;
}

void EscribirHistorial() {
	ofstream Guardados;

	Guardados.open("HistorialDeJuego.txt", ios::out);
	if (Guardados.fail()) {
		cout << "No se pudo abrir historial";
		exit(1);
	}

	Guardados << resultado;
	Guardados.close();
}


void LeerHistorial() {
	ifstream Guardados;
	string Texto;

	Guardados.open("HistorialDeJuego.txt", ios::in);
	if (Guardados.fail()) {
		cout << "No se pudo abrir historial";
		exit(1);
	}

	while (!Guardados.eof()) {
		getline(Guardados, Texto);
		cout << Texto << endl;
	}

	Guardados.close();
}

void ModificarHistorial() {
	ofstream Guardados;

	Guardados.open("HistorialDeJuego.txt", ios::app);
	if (Guardados.fail()) {
		cout << "No se pudo abrir historial";
		exit(1);
	}

	Guardados << resultado;

	Guardados.close();
}