#include <iostream>
#include <memory>
using namespace std;

unique_ptr<int>triplicar(int valor) {
    unique_ptr<int> resultado(new int);
	*resultado = valor * 3;
    return resultado; 
}
int main() {
    unique_ptr<int> edad(new int);
    *edad = 21;
    cout << "Edad: " << *edad << endl;
	
	unique_ptr<int> ptr = triplicar(5);
    cout << "ptr triplicado: " << *ptr << endl;
    // no hace falta delete - se libera solo al salir de scope
    return 0;
}