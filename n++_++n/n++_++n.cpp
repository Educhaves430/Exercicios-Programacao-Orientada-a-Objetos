// n++_++n.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	//n1=n1+10   n1+=10
	//n1=n1-10   n1-=10
	//n1=n1*10   n1*=10
	//n1=n1/10   n1/=10
	//n1=n1%10   n1%=10
	//n1=n1+1    n1++
	//n1=n1-1    n1--
	//n1++       ++n1

	int n1 = 10;
	cout << n1++ << "\n";
	cout << n1 << "\n\n";

	int n2 = 10;
	cout << ++n2 << "\n";
	cout << n2 << "\n\n";

	int n3 = 15;
	cout << n3 << "\n";
	n3 %= 10;
	cout << n3 << "\n\n";

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
