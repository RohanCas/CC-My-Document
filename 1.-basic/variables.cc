#include <iostream>
#include <string> 

using namespace std;

int main() {
    int edad = 23;
    double salario = 1500.75;
    char esCierto = true;


    //tipos de enteros 
    short enteroCorto = 10;
    long enteroLargo = 1000000;
    unsigned int enteroSinSigno = 5;


    //tipos de punto flotante 
    float altura = 1.75f;
    long double pi = 3.141592653589793;

    //tipos caracteres
    wchar_t caracterAncho = L' A';


    //tipos de boleanos
    bool esFalso = false;


    //otros tipos 
    string cadena = "Hola, Mundo!";
    int arreglosEnteros[] = {1, 2, 3, 4, 5}
    int* punteroEntero = &edad;


    // Mostrar los valores de las variables 

    cout << "Edad: " << edad << endl;
    cout << "salario: " << salario << endl;
    cout << "salario: " << salario << endl;
    cout << "letra: " << letra << endl;
    cout << << "Es Cierto: " << esCierto << endl;

    cout << "Entero Corto: " << enteroCorto << endl;
    cout << "Entero Largo: " << enteroLargo << endl;
    cout << "Entero Sin Signo: " << enteroSinSigno << endl;
 
    cout << "Altura: " << altura << endl;
    cout << "Pi: " << pi << endl;
 
    wcout << "Caracter Ancho: " << caracterAncho << endl;
 
    cout << "Es Falso: " << esFalso << endl;
 
    cout << "Cadena: " << cadena << endl;

    cout << "Arreglo de Enteros: ";
    for (int i = 0; i < 5; ++i) {
        cout << arregloEnteros[i] << " ";
    }
    cout << endl;
 
    cout << "Puntero a Entero: " << *punteroEntero << endl;
 
    return 0;
}








