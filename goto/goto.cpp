// goto.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	float n1, n2, res;
	char opc;

inicio:
	system("cls");

	cout << "\n Digite o valor da primeira nota: ";
	cin >> n1;

	cout << "\n Digite o valor da segunda nota: ";
	cin >> n2;

	res = (n1 + n2) / 2;

	if (res >= 9.5) {
		cout << "\n Pssaste";
	}
	else if (res >= 8.5) {
		cout << "\n Foi por pouco!";
	}
	else {
		cout << "\n Tens de estudar mais!!!";
	}

	cout << "\n Digitar outras notas?(s/n) ";
	cin >> opc;

	if (opc == 's' or opc == 'S') {
		goto inicio;
	}

	cout << "\n\n";
	system("pause");
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
