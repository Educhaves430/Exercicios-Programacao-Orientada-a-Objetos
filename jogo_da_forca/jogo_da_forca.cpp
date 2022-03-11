// jogo_da_forca.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	char palavra[30], letra[1], secreta[30];
	int tamanho = 0, i = 0, vidas = 6, acertos = 0;
	bool acerto = false;

	cout << "\n Primeiro jogador escolhe a palavra e adeversario feha os olhos.";
	cout << "\n Digite a palavra com maximo de 30 caracteres.\n";
	cin >> palavra;

	system("cls");

	while (palavra[i] != '\0')
	{
		i++;
		tamanho++;
	}

	for (i = 0; i < 30; i++) {
		secreta[i] = '*';
	}

	while (vidas > 0 && acertos < tamanho) {
		cout << "\n Vidas restantes: " << vidas << "\n\n";
		cout << "Palavra Secreta: ";

		for (i = 0; i < tamanho; i++) {
			cout << secreta[i];
		}

		cout << "\n\n Digite uma letra: ";
		cin >> letra[0];

		for (i = 0; i < tamanho; i++) {
			if (palavra[i] == letra[0]) {
				acerto = true;
				secreta[i] = palavra[i];
				acertos++;
			}
		}
		if (!acerto) {           //acerto = false é a mesma coisa que !acerto
			vidas--;
		}

		acerto = false;
		system("cls");
	}

	if (acertos == tamanho) {
		cout << "Voce venceu.\n\n";
	}
	else {
		cout << "Voce perdeu.\n\n";
	}

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
