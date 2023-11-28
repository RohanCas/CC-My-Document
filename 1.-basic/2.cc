#include <iostream>

int main()
{
    int numero1, numero2, suma;

    std::cout << "ingresa el primer numero:";
    std::cin >> numero1;

    std::cout << "ingrese el segundo numero:";
    std::cin >> numero2;

    suma = numero1 + numero2;

    std::cout << numero1 << " + " << numero2 << " = " << suma << std::endl;
    return 0;
}