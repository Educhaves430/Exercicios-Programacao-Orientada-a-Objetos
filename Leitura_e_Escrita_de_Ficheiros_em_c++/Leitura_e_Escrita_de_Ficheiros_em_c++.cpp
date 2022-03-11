// Leitura_e_Escrita_de_Ficheiros_em_c++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream is; // objecto os para abrir o ficheiro em modo de leitura
    ofstream os; // objecto os para abrir o ficheiro em modo de escrita
    // para abrir o ficheiro em modo de escrita e leitura deve usar-se a class fstream

    is.open("dados_ent.txt");
    if (!is) {
        cout << "ERRO: nao e' possivel abrir o ficheiro dados_ent.txt" << '\n';
        exit(1);
    }

    os.open("dados_saida.txt");
    if (!os) {
        cout << "ERRO: nao e' possivel abrir o ficheiro dados_saida.txt" << '\n';
        exit(1);
    }

    int a, b;

    is >> a >> b;

    cout << a << endl << b << endl;

    os << a + a << ' ' << b + b;

    is.close(); // fecha o ficheiro associado a is
    os.close(); // fecha o ficheiro associado a os
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
