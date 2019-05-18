#include <iostream>

using namespace std;

int precioSeguro(char &sexo, int &edad, int &seguro) {
	if (sexo == 'M') {
		if (edad < 25) {
			seguro = 1000;
		}
		else {
			seguro = 700;
		}
	}
	else {
		if (edad < 21) {
			seguro = 800;
		}
		else {
			seguro = 500;
		}
	}
	return seguro;
}

int main() {
	char sexo;
	int edad;
	int seguro = 0;
	int pagoSeguro;

	do {
		cout << "Ingrese el sexo del conductor: ";
		cin >> sexo;
	} while (sexo != 'M' && sexo != 'F');

	do {
		cout << "Ingrese la edad del conductor: ";
		cin >> edad;
	} while (edad < 0);

	pagoSeguro = precioSeguro (sexo, edad, seguro);

	cout << "El precio a pagar del seguro es " << pagoSeguro << endl;

	system("pause");
	return 0;
}