// estroturas_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct Carro
{
    string marca;
    string cor;
    int nPortas = 0;
    int vel = 0;
    int velMax = 0;

    void insere(string cMarca, string cCor, int cNPortas, int cVelMax) {
        marca = cMarca;
        cor = cCor;
        nPortas = cNPortas;
        velMax = cVelMax;
    }

    void imprime() {
        cout << "Marca............: " << marca << "\n";
        cout << "Cor..............: " << cor << "\n";
        cout << "Numero de Portas.: " << nPortas << "\n";
        cout << "Velocidade atual.: " << vel << "\n";
        cout << "Velocidade Maxima: " << velMax << "\n\n";
    }

    void mudaVel(int mv) {
        vel = mv;

        if (vel > velMax)
            vel = velMax;
        if (vel < 0)
            vel = 0;
    }
};

int main()
{
    Carro* carros = new Carro[5];
    Carro carro1, carro2, carro3, carro4, carro5;

    string a, b;
    int c, d;

    carros[0] = carro1; carros[1] = carro2; carros[2] = carro3; carros[3] = carro4; carros[4] = carro5;

    for (int i = 0; i < 5; i++) {
        cout << "\nCarro " << i + 1;
        cout << "\nDigite a marca: ";
        cin >> a;
        cout << "Digite a cor: ";
        cin >> b;
        cout << "Digite o numero de portas: ";
        cin >> c;
        cout << "Digite a velocidade maxima: ";
        cin >> d;
        carros[i].insere(a, b, c, d);
    }

    cout << "\n//////////////////////////////////////////////////////\n\n";

    for (int i = 0; i < 5; i++) {
        carros[i].imprime();
    }

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
