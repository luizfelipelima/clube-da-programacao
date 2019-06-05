#include <iostream>
#include <cmath>

using namespace std;

int main() {
	float x1, y1, x2, y2;

	cout << "X1: ";
	cin >> x1;
	cout << "Y1: ";
	cin >> y1;
	cout << "X2: ";
	cin >> x2;
	cout << "Y2: ";
	cin >> y2;

	cout << "Distancia: " << sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1))) << endl;
	return 0;
}