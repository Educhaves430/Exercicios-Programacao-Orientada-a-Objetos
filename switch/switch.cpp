// switch.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int val;
	char res;

inicio:

	system("cls");

	cout << "\n Digite um mes do ano:(1-12) ";
	cin >> val;

	switch (val)
	{
	case 1:
		cout << "\nJaneiro";
		break;
	case 2:
		cout << "\nFevereiro";
		break;
	case 3:
		cout << "\nMarco";
		break;
	case 4:
		cout << "\nAbril";
		break;
	case 5:
		cout << "\nMaio";
		break;
	case 6:
		cout << "\nJunho";
		break;
	case 7:
		cout << "\nJulho";
		break;
	case 8:
		cout << "\nAgosto";
		break;
	case 9:
		cout << "\nSetembro";
		break;
	case 10:
		cout << "\nOutubro";
		break;
	case 11:
		cout << "\nNovembro";
		break;
	case 12:
		cout << "\nDezembro";
		break;
	default:
		cout << "\nValor selecionado invalido.\n";
		system("Pause");
		goto inicio;
	}

	cout << "\n\nDeseja escolher de novo?(s/n) ";
	cin >> res;

	if (res == 's' || res == 'S')
		goto inicio;

	cout << "\n\n";

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
