// Classe.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdlib.h>
using namespace std;

class Aviao
{
public:
	int vel = 0;
	int velmax;
	string tipo;
	void ini(int tp);
private:

};

void Aviao::ini(int tp) { //1:Jato  2:Airbus  3:Planador
	if (tp == 1) {
		this->velmax = 800;
		this->tipo = "Jato";
	}
	else if (tp == 2) {
		this->velmax = 400;
		this->tipo = "Airbus";
	}
	else if (tp == 3) {
		this->velmax = 200;
		this->tipo = "Planador";
	}
}

int main()
{
	Aviao* av1 = new Aviao;
	Aviao* av2 = new Aviao;
	Aviao* av3 = new Aviao;

	av1->ini(1);
	av2->ini(2);
	av3->ini(3);

	cout << av1->velmax << "\n";
	cout << av2->velmax << "\n";
	cout << av3->velmax << "\n";

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
