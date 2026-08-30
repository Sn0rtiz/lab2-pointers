#include <iostream>
using namespace std;

int main() {
    int num = 25;
	double precio = 19.99;
    // Dirección de memoria
    cout << "Direccion de num: " << &num << endl;

    // Declarar y asignar un pointer
    int *ptr = nullptr;
	double *pptr = nullptr;
	//int *sinInicializar;

	// ejecicio dos el int apuntado al double
	//int *malPtr = &precio;

    ptr = &num;
	pptr= &precio;

    cout << "ptr apunta a: " << ptr << endl;
    cout << "Valor apuntado (*ptr): " << *ptr << endl;
	cout << endl;
	cout << "pptr apunta a: " << pptr << endl;
    cout << "Valor apuntado (*pptr): " << *pptr << endl;
	cout << endl;
    // Modificar el valor original a traves del pointer
    *ptr = 100;
    cout << "num despues de *ptr = 100: " << num << endl;

	//cout << *sinInicializar << endl; Esta linea de aqui impreme basura ya que al no ser inicializado y no tener un valor de verdad el programa va a poner cualquier numero sin sentido en el output o directamente que alla un fallo al ejecutar el programa
    return 0;
}
//2. ¿Qué pasa si intentas int *malPtr = &precio; (un pointer de int apuntando a un double)? Inténtalo y lee el error del compilador con cuidado — ¿qué te está diciendo?
/*error: cannot convert 'double*' to 'int*' in initialization
   14 |         int *malPtr = &precio;
      |                       ^~~~~~~
      |                       |
      |                       double* 
	  el error sale debido a que estan declarados diferentes uno como entero y otro decimal.*/

	  // 3. Declara un pointer int *sinInicializar; (sin nullptr ni dirección) y trata de hacer cout << *sinInicializar;. No lo dejes en el código al terminar — solo obsérvalo, comenta la línea después. ¿Qué tan predecible te pareció el resultado?