// pilha.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack <string> cartas;

    cartas.push("As de copas.");
    cartas.push("As de espadas.");
    cartas.push("As de ouros.");
    cartas.push("As de paus.");

    cout << "\n Tamanho da pilha: " << cartas.size() << "\n";
    cout << " Carta do topo: " << cartas.top() << "\n";

    //while (!cartas.empty()) {  //.empty verifica se existem objetos dentro da pilha
        //cout << " Carta do topo: " << cartas.top() << "\n";
        //cartas.pop();
    //}

    cartas.pop();

    cout << " Nova carta do topo: " << cartas.top() << "\n";
    cout << " Novo tamanho da pilha: " << cartas.size() << "\n\n";

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
