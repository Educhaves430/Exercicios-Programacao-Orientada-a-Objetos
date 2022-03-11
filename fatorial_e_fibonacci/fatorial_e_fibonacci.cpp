// fatorial_e_fibonacci.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<stdlib.h>
using namespace std;

int fatorial(int n);
int fibonacci(int n);

int main()
{
    int val, res;
    val = 3;
    res = fatorial(val);

    cout << "Fatorial de " << val << " e' " << res << "\n";

    cout << "\nFibonacci com " << val << " valores: ";
    for (int i = 0; i < val; i++) {
        cout << fibonacci(i + 1) << " ";
    }

    cout << "\n\n";

    system("Pause");
    return 0;
}

int fatorial(int n) {
    if (n == 0)
        return 1;
    return n * fatorial(n - 1);
}

int fibonacci(int n) {
    if (n == 1 || n == 2)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
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
