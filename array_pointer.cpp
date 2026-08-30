#include <iostream>
using namespace std;

int main() {
    int vals[] = {4, 7, 11, 18, 25};

    cout << "Nombre del array (direccion): " << vals << endl;
    cout << "Primer elemento (*vals): " << *vals << endl;

    int *valptr = vals;   // valptr apunta al primer elemento

	int *inicio = vals;
	int *fin = vals + 4;
    cout << "\n--- Recorriendo con [] ---" << endl;
    for (int i = 0; i < 5; i++) {
        cout << valptr[i] << " ";
    }
    cout << endl;

    cout << "\n--- Recorriendo con aritmetica de punteros ---" << endl;
    for (int i = 0; i < 5; i++) {
        cout << *(valptr + i) << " ";
    }
    cout << endl;

    cout << "\n--- Usando ++ para avanzar el pointer ---" << endl;
    int *p = vals;
    for (int i = 0; i < 5; i++) {
        cout << *p << " ";
        p++;
    }
    cout << endl;
	// Ejercicio 1.
	cout << *(valptr + 4) << endl;
	cout << endl;

	// ejercicio 2.
	cout << *fin - *inicio << endl;
	//¿El resultado que obtienes tiene sentido con la cantidad de elementos del array?

	//Si tiene sentido ya que solo esta restando el ultimo que seria 25 y el primero que seria 4. El output del programa da 21 que es el resultado correcto.

	//ejercicio 3.
	/*Error común para observar (no corregir): cambia el for de i < 5 a i < 7 en cualquiera de los tres bloques y corre el programa. ¿El compilador te detiene? ¿Qué imprime? Recuerda: ni arrays ni pointers hacen bounds checking en C++ — esto es exactamente por qué es peligroso.

	El programa imprime lo siguente:
	--- Recorriendo con [] ---
	4 7 11 18 25 0 0

	--- Recorriendo con aritmetica de punteros ---
	4 7 11 18 25 0 0

	--- Usando ++ para avanzar el pointer ---
	4 7 11 18 25 0 0

	El compilador no lo detiene lo que cause que imprima estos espacios vacios en donde no hay nada guardado. Esto puede llegar a ser un problema ya que el programa no te advierte del error lo que podria causar problemas a futuro.*/

    return 0;
}