#include <iostream>
using namespace std;

int main() {
	int n1, n2;
	cin >> n1 >> n2;
	int sum = n1 + n2;

	if (sum % 2 == 0)
		cout << "Bino";
	else
		cout << "Cino";
	cout << endl;

	return 0;
}

