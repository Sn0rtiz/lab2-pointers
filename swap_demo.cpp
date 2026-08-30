#include <iostream>
using namespace std;

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}
// ejercicio 1
void duplicar(int *valor)
{
	cout << "Numero duplicado:" << *valor*2 << endl;
}
// ejercicio 2
void ordenarPar(int *a, int *b)
{
	if (*a > *b)
	{
	cout << "Antes: num3=" << *a << " num4=" << *b << endl;
	int temp = *a;
	*a = *b;
	*b = temp;
	cout << "Ya ordenados:" << "num3=" << *a << " num4=" << *b << endl;
	}
}
int main() {
    int num1 = 2, num2 = -3;
	int num3=80, num4=40;
    cout << "Antes: num1=" << num1 << " num2=" << num2 << endl;
    swap(&num1, &num2);
    cout << "Despues: num1=" << num1 << " num2=" << num2 << endl;
	cout << endl;
	duplicar(&num2);
	cout << endl;
	ordenarPar(&num3, &num4);

    return 0;
}