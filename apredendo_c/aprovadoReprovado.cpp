#include <iostream>
using namespace std;

int main() {
	int n1, n2;
	cin >> n1 >> n2;
	int media = (n1 + n2) / 2;
	
	if (media < 4)
		cout << "Reprovado";
	else if (media < 7)
		cout << "Recuperacao";
	else
	 	cout << "Aprovado";
	cout << endl;

	return 0;
}

