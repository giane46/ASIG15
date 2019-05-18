#include <iostream>

using namespace std;

int salarioSemanal(int &salario, int &horas, int &pago) {
	if (horas <= 40) {
		pago = 16;
		salario = horas * pago;
	}
	else {
		pago = 20;
		salario = 40 * 16 + (horas - 40)*pago;
	}
	return salario;
}

int main() {
	int salario;
	int horas;
	int pago;

	cout << "Ingrese horas del trabajador: ";
	cin >> horas;

	salario = salarioSemanal(salario, horas, pago);

	cout << "El salario semanal del obrero es " << salario << endl;

	system("pause");
	return 0;
}