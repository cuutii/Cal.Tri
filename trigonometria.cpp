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

        break;
        default; //opcion no contemplada
    }

    getch();
    return 0;
}