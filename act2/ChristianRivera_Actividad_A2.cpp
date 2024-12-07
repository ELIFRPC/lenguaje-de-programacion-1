#include <iostream>

using namespace std;

int main() {
    float numero1;
    float numero2;
    float suma;
    float resta;
    float multiplicacion;
    float division;

    cout << "Escribe el Primer Numero: ";
    cin >> numero1;

    cout << "Escribe el Segundo Numero: ";
    cin >> numero2;

    suma = numero1 + numero2;
    resta = numero1 - numero2;
    multiplicacion = numero1 * numero2;
    division = numero1 / numero2;

    cout << "La suma es: " << suma << "\n";
    cout << "La resta es: " << resta << "\n";
    cout << "La multiplicacion es: " << multiplicacion << "\n";
    cout << "La division es: " << division << "\n";

    return 0;
}
