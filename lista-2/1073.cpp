#include <iostream>

using namespace std;

void resultado (int n) {
	int i;

	for (i = 1; i<=n; i++) {
		if (i % 2 == 0) {
			cout << i*i << endl;
		}
	}
}

int main() {

	int n;

	cin >> n;
	resultado(n);
	
	return 0;
}