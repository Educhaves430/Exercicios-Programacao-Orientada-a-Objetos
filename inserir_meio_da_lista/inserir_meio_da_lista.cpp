// inserir_meio_da_lista.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <list>
using namespace std;

int main()
{
    list <int> aula;
    list <int>::iterator it;
    int tam = 10;

    for (int i = 0; i < tam; i++) {
        aula.push_back(i); //Insere os numeros de tras para a frente 9 8 7 6 5 4 3 2 1 0 
    }

    it = aula.begin();
    advance(it, 7);

    aula.insert(it, 0);

    cout << "Tamanho da lista: " << aula.size() << "\n\n";

    tam = aula.size();

    for (int i = 0; i < tam; i++) {
        cout << aula.front() << "\n";
        aula.pop_front();
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
