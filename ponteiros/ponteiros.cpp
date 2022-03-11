// ponteiros.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void somar(float*, float);
void iniVetor(float*);

int main()
{
    float num = 0;
    float arr[5];

    cout << "\n" << num << "\n\n";
    somar(&num, 17);
    cout << num << "\n\n";

    iniVetor(arr);
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << "\n";
    }

    cout << "\n\n";

    system("Pause");
    return 0;
}

void somar(float* var, float valor) {
    *var += valor;
}

void iniVetor(float* v) {
    for (int i = 0; i < 5; i++) {
        v[i] = 5;
    }
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
