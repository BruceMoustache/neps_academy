#include <iostream>
using namespace std;

int main() {
	int m, a;
	cin >> a >> m;
	int total = a + m;
	
	if (total <= 50)
		cout << "S";
	else
		cout << "N";
	cout << endl;

	return 0;
}

