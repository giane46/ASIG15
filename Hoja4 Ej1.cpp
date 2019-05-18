#include <iostream>

using namespace std;

int totalNeum3 (int &cantNeum, int &precioNeum) {
	precioNeum = 145;
	int totalNeum3 = precioNeum * cantNeum;

	return totalNeum3;
}

int totalNeum5(int &cantNeum, int &precioNeum) {
	precioNeum = 138;
	int totalNeum5 = precioNeum * cantNeum;

	return totalNeum5;
}

int totalNeum(int &cantNeum, int &precioNeum) {
	precioNeum = 135;
	int totalNeum = precioNeum * cantNeum;

	return totalNeum;
}

void main() {
	int cantNeum;
	int precioNeum;
	int pagoNeum;

	do {
		cout << "Ingrese la cantidad de neumaticos a comprar: ";
		cin >> cantNeum;
	} while (cantNeum < 0);

	if (cantNeum < 3) {
		pagoNeum = totalNeum3(cantNeum, precioNeum);
	}
	else if (cantNeum >= 3 && cantNeum <= 5) {
		pagoNeum = totalNeum5(cantNeum, precioNeum);
	}
	else if (cantNeum > 5) {
		pagoNeum = totalNeum(cantNeum, precioNeum);
	}

	cout << "Cantidad de neumaticos = " << cantNeum << endl;
	cout << "Precio por neumatico = " << precioNeum << endl;
	cout << "-------------------------------------------------" << endl;
	cout << "Monto total a pagar = " << pagoNeum << endl;

	system("pause");
}