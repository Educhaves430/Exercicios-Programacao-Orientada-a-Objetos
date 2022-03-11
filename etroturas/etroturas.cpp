// etroturas.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct Carro
{
    string marca;
    string cor;
    int n_portas=0;
};

int main()
{
    Carro carro1, carro2;

    carro1.marca = "BMW";
    carro1.cor = "Vermelho";
    carro1.n_portas = 5;

    carro2.marca = "Renaut";
    carro2.cor = "Preto";
    carro2.n_portas = 3;

    cout << "Marca...........: " << carro1.marca << "\n";
    cout << "Cor.............: " << carro1.cor << "\n";
    cout << "Numero de Portas: " << carro1.n_portas << "\n\n";

    cout << "Marca...........: " << carro2.marca << "\n";
    cout << "Cor.............: " << carro2.cor << "\n";
    cout << "Numero de Portas: " << carro2.n_portas << "\n\n";

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
