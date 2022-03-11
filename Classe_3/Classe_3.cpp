// Classe_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdlib.h>
#include "Veiculo.h"
using namespace std;

int main()
{
    Veiculo* v1 = new Veiculo(1);
    Veiculo* v2 = new Veiculo(2);
    Veiculo* v3 = new Veiculo(3);

    v1->setLigado(1);
    //v2->setLigado(0);
    //v3->setLigado(1);

    cout << v1->getVelMax() << "\n";
    cout << v2->getVelMax() << "\n";
    cout << v3->getVelMax() << "\n";

    if (v1->getLigado()) {
        cout << "O veiculo esta ligado." << "\n";
    }
    else {
        cout << "O veiculo esta desligado." << "\n";
    }

    if (v2->getLigado()) {
        cout << "O veiculo esta ligado." << "\n";
    }
    else {
        cout << "O veiculo esta desligado." << "\n";
    }

    if (v3->getLigado()) {
        cout << "O veiculo esta ligado." << "\n";
    }
    else {
        cout << "O veiculo esta desligado." << "\n";
    }

    cout << "\n";
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
