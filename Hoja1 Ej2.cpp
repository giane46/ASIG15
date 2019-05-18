#include <iostream>

using namespace std;

int dibujaCuadrado(char &caracter, int &tamanio, int &i, int &j) {
	for (i = 0; i < tamanio; i++) {
		for (j = 0; j < tamanio; j++) {
			if (i == 0 || j == 0 || i == tamanio - 1 || j == tamanio - 1) {
				cout << caracter << " ";
			}
			else {
				cout << "  ";
			}
		}
		cout << endl;
	}

	return caracter;
}

void main() {
	char caracter;
	int tamanio;
	int i, j;

	cout << "Ingrese un caracter: ";
	cin >> caracter;
	cout << "Ingrese el tamanio del cuadrado: ";
	cin >> tamanio;

	cout << dibujaCuadrado(caracter, tamanio, i, j);

	system("pause");
}