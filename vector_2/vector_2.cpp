// vector_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> num1, num2;
    int tam1, tam2;

    num1.push_back(0);
    num1.push_back(1);
    num1.push_back(2);
    num1.push_back(3);
    num1.push_back(4);

    num2.push_back(5);
    num2.push_back(6);
    num2.push_back(7);
    num2.push_back(8);

    tam1 = num1.size();

    num1.insert(num1.begin(), 888); //inserir um numero atraves do inicio
    num1.insert(num1.end(), 999); //inserir um numero a partir do fim
    num1.erase(num1.begin());  //eliminar o primeiro numero
    num1.erase(num1.end()-1);  //eliminar o ultimo numero

    //num1.swap(num2);  //troca dois vectores

    cout << "Primeiro elemento do vector1........: " << num1.front() << "\n";
    cout << "Ultimo elemento do vector2..........: " << num1.back() << "\n";
    cout << "Valor do elemento do meio do vector1: " << num1.at(tam1 / 2) << "\n";

    tam1 = num1.size();

    cout << "Tamanho do vector1: " << tam1 << "\n";

    for (int i = 0; i < tam1; i++) {
        cout << num1[i] << " ";
    }

    cout << "\n";

    tam2 = num2.size();

    cout << "Tamanho do vector2: " << tam2 << "\n";

    for (int i = 0; i < tam2; i++) {
        cout << num2[i] << " ";
    }

    while (!num1.empty()) {  //Linmpar os numeros atraves do fim
        num1.pop_back();
    }

    num2.clear();  //Limpar todos os numeros

    cout << "\nNovo tamanho do vector1: " << num1.size();
    cout << "\nNovo tamanho do vector2: " << num2.size();

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
