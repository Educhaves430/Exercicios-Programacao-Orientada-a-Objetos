// sort_e_reverse.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <list>
using namespace std;

int main()
{
    list <int> aula;
    int tam = 10;

    aula.push_front(2);
    aula.push_front(9);
    aula.push_front(0);
    aula.push_front(4);
    aula.push_front(7);
    aula.push_front(5);
    aula.push_front(1);
    aula.push_front(8);
    aula.push_front(6);
    aula.push_front(3);

    cout << "Tamanho da lista: " << aula.size() << "\n\n";

    //Ordena��o da lista
    aula.sort(); //0 1 2 3 4 5 6 7 8 9
    aula.reverse(); //9 8 7 6 5 4 3 2 1 0

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
