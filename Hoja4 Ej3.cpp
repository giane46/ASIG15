#include <iostream>

using namespace std;

int diametroCm(float &precioDiam, float &diametro, float &pagoDiam) {
	precioDiam = 1.5;
	pagoDiam = precioDiam * diametro;

	return pagoDiam;
}

int ingrExtra(float &precioIngr, float &extra, float &pagoIngr) {
	precioIngr = 2.5;
	pagoIngr = precioIngr * extra;

	return pagoIngr;
}

int main() {
	float precioDiam = 1.5;
	float diametro, pagoDiam;
	float precioIngr = 2.5;
	float extra, pagoIngr;
	float precioPizza;

	cout << "Ingrese el diametro de la pizza en cm: ";
	cin >> diametro;

	cout << "Ingrese la cantidad de ingredientes extra: ";
	cin >> extra;

	pagoDiam = diametroCm(precioDiam, diametro, pagoDiam);

	pagoIngr = ingrExtra(precioIngr, extra, pagoIngr);

	precioPizza = pagoDiam + pagoIngr;

	cout << "El precio de la pizza es " << precioPizza << endl;


	system("pause");
	return 0;
}