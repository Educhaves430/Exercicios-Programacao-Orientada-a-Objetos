// true_false.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	float n1, n2, media;
	string res;

	cout << "\n Digite a nota do primeiro teste: ";
	cin >> n1;

	cout << "\n Digite a nota do segundo teste: ";
	cin >> n2;

	media = (n1 + n2) / 2;

	(media >= 9.5) ? res = "Aprovado" : res = "Reprovado";

	cout << "\nSituacao do aluno: " << res << "\n\n";

	system("Pause");
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
