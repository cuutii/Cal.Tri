#include <iostream>
#include <conio.h>
using namespace std;

int main() {
    int opcion;
    float area, base, altura, lado, radio;

    cout << "**********" << endl;
    cout << "Calcular trigonometría" << endl;
    cout << "Triángulo       (1)" << endl;
    cout << "Cuadrado        (2)" << endl;
    cout << "Rectángulo      (3)" << endl;
    cout << "Círculo         (4)" << endl;
    cout << "**********" << endl;

    cin >> opcion;
    while (opcion < 1 || opcion > 4) {
        cout << "Ingrese una opción correcta" << endl;
        cin >> opcion;
    }

    switch (opcion) {
        case 1: // Triángulo
            cout << "Digite la base: ";
            cin >> base;
            cout << "Digite la altura: ";
            cin >> altura;
            area = (base * altura) / 2;
            cout << "El área es " << area << endl;
            break;

        case 2: // Cuadrado
            cout << "Digite el lado del cuadrado: ";
            cin >> lado;
            area = lado * lado;
            cout << "El área es " << area << endl;
            break;

        case 3: // Rectángulo
            cout << "Digite la base: ";
            cin >> base;
            cout << "Digite la altura: ";
            cin >> altura;
            area = base * altura;
            cout << "El área es " << area << endl;
            break;

        case 4: // Círculo
            cout << "Digite el radio del círculo: ";
            cin >> radio;
            area = 3.14159 * radio * radio;
            cout << "El área es " << area << endl;
            break;

        default:
            cout << "Opción no contemplada" << endl;
            break;
    }

    getch();
    return 0;
}
