// variaveis_globais.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int n1, n2; //Variáveis globais

int main()
{
	int n3, n4;
	int res1, res2;

	n1 = 11;
	n2 = 3;
	n3 = 5;
	n4 = 2;

	res1 = n1 + n2;
	cout << "\n 11+3 = " << res1;

	res1 = n1 - n2;
	cout << "\n 11-3 = " << res1;

	res1 = n1 * n2;
	cout << "\n 11*3 = " << res1;

	res1 = n1 / n2;
	res2 = n1 % n2;
	cout << "\n 11/3 = " << res1 << " e o resto e' " << res2;

	res1 = n1 + n2 * n3 + n4;
	res2 = (n1 + n2) * (n3 + n4);
	cout << "\n 11+3*5+2 = " << res1;
	cout << "\n (11+3)*(5+2) = " << res2 << "\n\n";

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
