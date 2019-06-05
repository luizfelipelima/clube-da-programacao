#include <iostream>

using namespace std;

int main() {
	float area, r, pi = 3.14159;

	cout << "Digite o raio: ";
	cin >> r;
	area = pi * r * r;
	cout << "Area = " << area << endl;
	return 0;
}