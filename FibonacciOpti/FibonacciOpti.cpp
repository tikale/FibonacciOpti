#include <iostream>
using namespace std;

unsigned int  fib(unsigned int, unsigned int *tab);

int main()
{
	unsigned int elementy;
	for (;;)
	{
		cout << "Witam. Aby wyjsc wpisz 0.\nPodaj numer elementu ciagu: ";
		cin >> elementy;
		unsigned int * tablica = new unsigned int[elementy+1];
		for (unsigned int ii = 0; ii <= elementy; ii++)
		{
			tablica[ii] = 0;
		}

		if (!elementy)
		{
			delete [] tablica;
			break;
		}
		else
		{
			cout << "\nA oto wartosc elementu ciagu Fibonacciego: ";
			cout << fib(elementy, tablica);
			delete [] tablica;
		}
		cout << "\n\n";
	}

	return 0;
}

unsigned int fib(unsigned int n, unsigned int *tab) {
	if (tab[n] > 0)
		return tab[n];
	if (n == 0) return 0;
	if (n == 1) return 1;
	tab[n] = fib(n - 1, tab) + fib(n - 2, tab);
	return tab[n];
}