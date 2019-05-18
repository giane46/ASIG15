#include <iostream>

using namespace std;

int factura(int &unidades, double &precio, double &monto, double &IGV) {
	IGV = 0.18;
	monto = unidades * (precio - precio * IGV);

	return monto;
}

int main() {
	int unidades;
	double precio;
	double monto;
	double IGV = 0.18;

	cout << "Ingrese las unidades a comprar del producto. ";
	cin >> unidades;
	cout << "Ingrese el precio del producto. ";
	cin >> precio;

	monto = factura(unidades, precio, monto, IGV);

	cout << "El monto total a pagar es " << monto << endl;

	system("pause");
	return 0;
}