#include <iostream>

int main() {
    float numero1, numero2, division;


    std::cout<< "Ingresa un numero: ";
    std::cin >> numero1;

    std::cout << "Ingrese el denominador: ";
    std::cin >> numero2;



    if (numero2 != 0) {
        division = numero1 / numero2;
        std::cout << numero1 << " / " << numero2 << " = " << division << std::endl;
    }

    return 0;
}