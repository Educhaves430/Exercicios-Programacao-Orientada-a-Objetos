// funcoes_sem_parametros.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdlib.h>
using namespace std;

void imp(string txt = "a"); //Se j� estiver definido aqui o que fazer se nao houver atributos para a fun�ao nao importa se colocamos ou nao os parametros na fun�ao quando a chamamos

int main()
{
	imp(); // ou imp("Eduardo") para imprimir Eduardo

	system("Pause");
	return 0;
}

void imp(string txt) {
	cout << "\n" << txt << "\n\n";
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
