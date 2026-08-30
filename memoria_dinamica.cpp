#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Un solo valor dinámico
    int *num = new int;
    *num = 42;
    cout << "Valor dinamico: " << *num << endl;
    delete num;
    num = nullptr;

    // Un array dinámico, con tamaño decidido en tiempo de ejecucion
	cout << "Array original del ejercicio/\n";
    int tamano;
    cout << "\nCuantos numeros quieres guardar? ";
    cin >> tamano;

    int *arr = new int[tamano];
    for (int i = 0; i < tamano; i++) {
        arr[i] = (i + 1) * 10;
    }

    cout << "Array dinamico: ";
    for (int i = 0; i < tamano; i++) {
        cout << arr[i] << " ";
    }
	 delete [] arr;
    arr = nullptr;
	
	//ejecicio 2
		cout << "ejercicio 2\n";

		int size;
		cout << "\nCuantos numeros quieres guardar para el primer arreglo?  ";
		cin >> size;

		int number;
		cout << "\nCuantos numeros quieres guardar para el segundo arreglo? ";
		cin >> number;

		double *arrd = new double[size];
		double *arrd2 = new double[number];
		for (int i = 0; i < size; i++) {
			arrd[i] = (i + 1) * 10;
		}

		for (int i = 0; i < number; i++) {
			arrd2[i] = (i + 1) * 10;
		}
		cout << fixed << setprecision(2);
		cout << "Array dinamico 1: ";
		for (int i = 0; i < size; i++) {
			cout << arrd[i] << " ";
		}
		cout << endl;

		cout << "Array dinamico 1: ";
		for (int i = 0; i < number; i++) {
			cout << arrd2[i] << " ";
		}
		cout << endl;

		delete [] arrd;
		arrd = nullptr;
		delete [] arrd2;
		arrd2 = nullptr;
    return 0;
}

//ejercicio 1.
//Comenta la línea delete [] arr; (déjala como // delete [] arr;) y corre el programa varias veces. El programa igual "funciona" — ¿por qué esto sigue siendo un problema real, aunque no lo veas fallar de inmediato? (Pista: piensa en un programa que corre por horas, no unos segundos.)
//Esto seria un problema debido a que se estaria abierto ese espacio de memoria gastando recursos del programa. Esto se conoce como un memory leak.