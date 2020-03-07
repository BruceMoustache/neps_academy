#include <iostream>
using namespace std;

int main() {
	int p, r;
	cin >> p >> r;

	if (not p)
		cout << "C";
	else if (not r)
		cout << "B";
	else
		cout << "A";
	cout << endl;

	return 0;
}

