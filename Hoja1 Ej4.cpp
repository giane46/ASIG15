#include <iostream>
#include <Windows.h>

using namespace std;

int dibujaRectangulo(int &largo, int &ancho, char &color, int &numColor, int &x, int &y, char &p) {

	switch (color) {
	case 'r':
		numColor = 4;
		break;
	case 'a':
		numColor = 1;
		break;
	case 'v':
		numColor = 10;
		break;
	default:
		numColor = 15;
		break;
	}

	for (int a = 0; a < x; a++) {
		cout << "  ";
		cout << endl;
	}

	for (int i = 0; i < ancho; i++) {
		for (int b = 0; b < y; b++) {
			cout << "  ";
		}
		for (int j = 0; j < largo; j++) {
			if (i == 0 || j == 0 || i == (ancho - 1) || j == (largo - 1)) {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), numColor);
				cout << " " << p;
			}
			else {
				cout << "  ";
			}
		}
		cout << endl;
	}
		/*for (int j = 0; j < largo; j++) {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), numColor);
			cout << " " << p;
		}
		cout << endl;*/

	return p;
}

int main(){
	int largo, ancho;
	int x, y;
	char color, p;
	int numColor;

	cout << "Ingrese largo y ancho del rectangulo, respectivamente: ";
	cin >> largo >> ancho;

	cout << "Ingrese X e Y, respectivamente: ";
	cin >> x >> y;

	cout << "Ingrese caracter: ";
	cin >> p;

	cout << "Ingrese el color deseado (r, a, v): ";
	cin >> color;

	dibujaRectangulo(largo, ancho, color, numColor, x, y, p);



	system("pause");
	return 0;
}