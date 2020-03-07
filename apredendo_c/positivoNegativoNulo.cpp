#include <iostream>
using namespace std;

int main() {
	int number;
	cin >> number;

	if (number < 0)
		cout << "negativo";
	else if (number > 0)
		cout << "positivo";
	else
		cout << "nulo";
	cout << endl;

	return 0;
}

