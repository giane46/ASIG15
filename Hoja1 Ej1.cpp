#include <iostream>

using namespace std;

void dibujaCuadrado(int &lado, int &i , int &j) {
	lado = 3;
	i = 0;
	j = 0;
}

void main() {
	int lado = 3;
	int i, j;

	for (i = 0; i < lado; i++) {
		for (j = 0; j < lado; j++) {
			if (i == 0 || j == 0 || i <= j || i >= j) {
				cout << "* ";
			}
			else {
				cout << "  ";
			}
		}
		cout << endl;
	}

	system("pause");
}