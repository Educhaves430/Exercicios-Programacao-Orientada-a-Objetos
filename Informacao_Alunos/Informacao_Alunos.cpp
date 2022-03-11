// Informacao_Alunos.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream op;
    ofstream al;

    al.open("dados.txt");
    if (!al) {
        cout << "ERRO: não é possível abrir o ficheiro dados.txt" << '\n';
        exit(1);
    }

    int idade = 0, numero = 0, i = 0;
    string nome;

    for (i = 0; i < 3; i++) {

        cout << "Digite a seu nome (Max 30 caracteres): ";
        cin >> nome;

        cout << "\n";
        
        cout << "Digite a sua idade: ";
        cin >> idade;

        cout << "\n";

        cout << "Digite o seu numero mecanografico: ";
        cin >> numero;

        cout << "\n";
        
        al << nome << idade << numero << ";";
    }

    al.close();

    op.open("dados.txt");
    if (!op) {
        cout << "ERRO: não é possível abrir o ficheiro dados.txt" << '\n';
        exit(1);
    }

    string ficheiro;

    op >> ficheiro;

    cout << ficheiro << "\n\n";

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
