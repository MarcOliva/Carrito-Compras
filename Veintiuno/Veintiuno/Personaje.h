#pragma once
class Personaje
{
public:
	Personaje(int numero_carta);
	~Personaje();
	int GetCarta();
	void SetCarta(int numero);

private:
	int numero_carta;
};

Personaje::Personaje(int numero)
{
	this->numero_carta = numero;
}

Personaje::~Personaje()
{
}

int Personaje::GetCarta() {
	return numero_carta;
}
void Personaje::SetCarta(int numero) {
	this->numero_carta = numero;
}