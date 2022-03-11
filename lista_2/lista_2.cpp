// lista_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <list>
using namespace std;

int main()
{
    list <int> aula;
    int tam=10;
    list <int>::iterator it;

    for (int i = 0; i < tam; i++) {
        aula.push_front(i);
    }

    it = aula.begin();
    advance(it, 3);
    aula.insert(it, 0); //insere um elemento na lista
    aula.erase(--it); //retira um elemento da lista
    //aula.clear();  //limpa toda a lista

    cout << "Tamanho da lista: " << aula.size() << "\n\n";

    tam = aula.size();
    for (int i = 0; i < tam; i++) {
        cout << aula.front() << "\n";
        aula.pop_front();
    }

    cout << "Tamanho da lista: " << aula.size() << "\n\n";

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
