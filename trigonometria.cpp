#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    
    int opcion;
    float area, base, altura, lado;

    cout<<"**********"<<endl;
    cout<<"calcular trigonometria"<<endl;
    cout<<"triangulo       (1)"<<endl;
    cout<<"cuadrado        (2)"<<endl;
    cout<<"rectangulo      (3)"<<endl;
    cout<<"circulo         (4)"<<endl;
    cout<<"**********"<<endl;
    
    cin>>opciones;
    while (opcion <1 or opcion >4){
        cout<<"ingrese una opcion correcta"<<endl;
        cin>>opcion;
    }

    switch (opcion){ //diversas opciones 
        case 1:
            cout<<"digite la base"<<endl;
            cin>>base;
            
            cout<<"digite la altura"<<endl;
            cin>>altura;
            
            area = (base * altura)/2;
            cout<<"el area es "<<area;

        break;
        case 2:
             cout<<"digite lado del cuadrado"<<endl;
             cin>>lado;
             
             area = lado * lado;
             cout<<"el area es "<<area;


        break;
        case 3:
        cout<<"digite la base"<<endl;
            cin>>base;
            
            cout<<"digite la altura"<<endl;
            cin>>altura;

            area = base * altura;

        break;
        case 4:
            cout<<"digite la base"<<endl;
            cin>>base;
            
            cout<<"digite la altura"<<endl;
            cin>>altura;

            area = base * altura;

        break;
        case 4:
            float radio;
            cout << "Digite el radio del círculo: ";
            cin >> radio;

            area = 3.14159 * radio * radio;
            cout << "El área del círculo es " << area << endl;
    break;

        default; //opcion no contemplada
    }

    getch();


#include <iostream>
#include <conio.h>
using namespace std;

int main() {
    int opcion;
    float area, base, altura, lado;

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
        case 1:
            cout << "Digite la base: ";
            cin >> base;

            cout << "Digite la altura: ";
            cin >> altura;

            area = (base * altura) / 2;
            cout << "El área es " << area << endl;
            break;

        case 2:
            cout << "Digite el lado del cuadrado: ";
            cin >> lado;

            area = lado * lado;
            cout << "El área es " << area << endl;
            break;

        case 3:
            cout << "Digite la base: ";
            cin >> base;

            cout << "Digite la altura: ";
            cin >> altura;

            area = base * altura;
            cout << "El área es " << area << endl;
            break;

        case 4:
            // Aquí puedes agregar la lógica para calcular el área de un círculo
            break;

        default:
            cout << "Opción no contemplada" << endl;
            break;
    }

    getch();
    return 0;
}

    return 0;
}
