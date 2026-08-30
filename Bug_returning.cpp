#include <iostream>
using namespace std;

int* triplicar(int valor) {
    int *resultado = new int;
	*resultado = valor * 3;
    return resultado; //aqui estaba regresando por referencia
}

int main() 
{
	int *ptr = triplicar(5);
    cout << "Resultado: " << *ptr << endl;
	delete [] ptr;
	ptr = nullptr;
    return 0;
}