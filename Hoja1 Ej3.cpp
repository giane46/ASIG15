#include <iostream>

using namespace std;

void dibujaCuadrado(int &n, int &x, int &y, char &caracter) {
	for (int a = 0; a < x; a++) {
		cout << "  ";
		cout << endl;
	}
	
	for (int i = 0; i < n; i++) {
		for (int b = 0; b < y; b++) {
			cout << "  ";
		}
		for (int j = 0; j < n; j++) {
			if (i == 0 || j == 0 || i == (n - 1) || j == (n - 1)) {
				cout << " " << caracter;
			}
			else {
				cout << "  ";
			}
		}
		cout << endl;
	}
}

int main() {
	int n, x, y;
	char caracter;

	cout << "Ingrese tamanio del cuadrado (n): ";
	cin >> n;

	cout << "Ingrese x e y respectivamente: ";
	cin >> x >> y;

	cout << "Ingrese un caracter: ";
	cin >> caracter;

	dibujaCuadrado(n, x, y, caracter);

	system("pause");
	return 0;
}