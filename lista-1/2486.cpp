#include <iostream>

using namespace std;

int main() {

	char alimentos[7][20] = {"suco de laranja", "morango fresco", "mamao",
		"goiaba vermelha", "manga", "laranja", "brocolis"};

	int t, n, i, alimento, soma;

	cout << "[1] - suco de laranja" <<endl;
	cout << "[2] - morango fresco" <<endl;
	cout << "[3] - mamao" <<endl;
	cout << "[4] - goiaba vermelha" <<endl;
	cout << "[5] - manga" <<endl;
	cout << "[6] - laranja" <<endl;
	cout << "[7] - brocolis" <<endl;
	cout << "[0] - sair" <<endl;

	cout << "T: ";
	cin >> t;

	while (t != 0) {
		soma = 0;
		if (t < 8) {
			for (i = 0; i < t; i++) {
				cout << "Alimento (Informe o codigo): ";
				cin >> alimento;
				cout << "Quantidade: ";
				cin >> n;

				switch (alimento) {
					case 1:
						soma = soma + 120 * n;
						break;

					case 2:
						soma = soma + 85 * n;
						break;

					case 3: 
						soma = soma + 85 * n;
						break;

					case 4:
						soma = soma + 70 * n;
						break;

					case 5:
						soma = soma + 56 * n;
						break;

					case 6:
						soma = soma + 50 * n;
						break;

					case 7:
						soma = soma + 34 * n;
						break;
				}
			}
		}

		if (soma < 110) {
			cout << "Mais " << 110 - soma << " mg" << endl;
		} else {
			if (soma < 130) {
				cout << soma << " mg" << endl;
			} else {
				cout << "Menos " << soma - 130 << " mg" << endl;
			}
		}

		cout << "T: ";
		cin >> t;
	}

	return 0;
}