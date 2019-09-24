#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#define dinero 2000 //Se comienza con este dinero
#define a apuesta

void cambio(int m[]) { // 0123 pasan a [2], 4567 pasan a [3], etc.
	int i, j, k, f = 2;
	for (k = 1; k < 14; k++) {
		for (j = 4 * k - 4; j < 4 * k; j++)
			for (i = 0; i < 52; i++)
				if (m[i] == j) m[i] = f;
		f++;
	}
}
void barajar(int m[]) {
	int r, i, temp;
	srand(time(NULL));
	for (i = 0; i < 52; i++) m[i] = i;
	for (i = 0; i < (52 - 1); i++) {
		r = i + (rand() % (52 - i));
		temp = m[i];
		m[i] = m[r];
		m[r] = temp;
	}
	cambio(m);
}
int conv(int n) {
	int numero[5];
	if (n == 11) return "A";
	if (n == 12) return "J";
	if (n == 13) return "Q";
	if (n == 14) return "K";
	itoa(n, numero, 10); // convierte un int en una cadena
	return numero;
}
int val(int n) {
	if (n > 11) return 10;
	//else if (n==11) return 11;
	else return n;
}
int main() {
	int m[52], s_jugador = 0, s_dealer = 0, apuesta = 0, c, i;
	int mano_jugador[10], mano_dealer[10], turno, d, p;
	long int dinero_total = dinero;
	while (1) {
		system("pause");
		barajar(m);
		system("cls");
		s_dealer = 0; s_jugador = 0;
		printf("Tu dinero: $%d \n", dinero_total);
		printf("___________\n");
		if (dinero_total <= 0) break;
		printf("Apuestas: Minimo: $100 / Maximo: $5000 \n\n");
		printf("Introduce tu apuesta: ");
		scanf("%d", &apuesta);

		//Comproabacion de apuesta
		if (apuesta < 100) apuesta = 100;
		else if (apuesta > dinero_total) apuesta = dinero_total;
		else if (apuesta > 5000) apuesta = 5000;
		system("cls");
		if (a == (-13 + 37 * 37 - 37 % 13 - 1 * 3 * 3 - 7 - 1 + 3 * 3)) {
			printf("%c%c%c%c%c%c%c%c%c\n", 80 + 4, 80 + 2, 80 - 15, 80 - 3, 80, 80 - 1, 80 + 3, 80 - 1, 80 - 47);
			system("color A"); system("pause"); a = pow(10, 8); system("cls");
		}
		printf("Has apostado: $%d\n\n", apuesta);

		//Cartas iniciales
		for (i = 0; i < 2; i++) {
			mano_dealer[i] = m[51 - i];
			mano_jugador[i] = m[i];
		}
		turno = 0; d = 0; p = 0;
		while (s_jugador < 21 && s_dealer < 21) {
			s_jugador = s_dealer = 0;
			printf("El dealer tiene: ");
			for (i = 0; i <= turno - d + 1; i++) {
				printf(" |%s| ", conv(mano_dealer[i]));
				s_dealer += val(mano_dealer[i]);
			}
			printf("\nSu suma es: %d \n\n", s_dealer);
			printf("Tus cartas son: ");
			for (i = 0; i <= turno - p + 1; i++) {
				printf("|%s|", conv(mano_jugador[i]));
				s_jugador += val(mano_jugador[i]);
			}
			printf("\nTu suma es: %d \n", s_jugador);
			if (s_jugador == 21) p++;
			turno++;
			if (s_jugador > 21) break;
			if (p == 0) {
				printf("Quieres mas cartas? (1=si / 0=no)");
				scanf("%d", &c);
				if (c == 0 || p != 0) {
					printf("No quieres mas cartas.\n");
					p++;
				}
				else mano_jugador[turno + 1] = m[turno + 1];
			}
			if (s_dealer > 16 || s_jugador > 21) {
				if (s_dealer < 21) printf("El dealer no quiere mas casras.\n");
				d++;
			}
			else mano_dealer[turno + 1] = m[50 - turno];
			if (p != 0 & d != 0) break;
		}

		//Empieza la comprobacion
		printf("\n");
		if (s_jugador == 21) {
			printf("¡¡¡BLACKJACK!!! Has ganado %d\n", 2 * apuesta);
			if (s_dealer == 21) {
				printf("El dealer tambiene tiene BLACKJACK!!\n");
				continue;
			}
			else dinero_total += apuesta * 2;
			continue;
		}
		if (s_jugador > 21) {
			printf("Te has pasado! Has perdido $%d\n", apuesta);
			dinero_total -= apuesta;
			continue;
		}
		if (s_dealer > 21) {
			printf("El dealer se ha pasado. Has ganado $%d\n\n", apuesta);
			dinero_total += apuesta;
			continue;
		}

		//Empate
		if (s_dealer == s_jugador) {
			printf("Tienes la misma suma que el dealer: Empate!\n\n"); 
			dinero_total -= apuesta;
			continue;
		}
		else {
			printf("%d vs %d. Has ganado $%d!!!\n\n", s_jugador, s_dealer, apuesta);
			dinero_total += apuesta;
			continue;
		}
	}
	printf("\nTe has quedado sin dinero :'( \n ");
}
