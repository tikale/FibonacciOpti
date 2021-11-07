#include <iostream>
using namespace std;

unsigned int  fib(unsigned int);

int main()
{
	unsigned int elementy;
	for (;;)
	{
		cout << "Witam. Aby wyjsc wpisz 0.\nPodaj numer elementu ciagu: ";
		cin >> elementy;
		if (elementy > 40)
			cout << "Za duzo, max 40\n";
		else if (!elementy)
			break;
		else
		{
			cout << "\nA oto wartosc elementu ciagu Fibonacciego: ";
			cout << fib(elementy);
		}
		cout << "\n\n";
	}

	return 0;
}

unsigned int fib(unsigned int n) {
	if (n == 0) return 0;
	if (n == 1) return 1;
	return fib(n - 1) + fib(n - 2);
}