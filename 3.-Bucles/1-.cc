#include <iostream>


int main() 
{
    int contador = 0; // inicializa la condición
    
    
    while(contador < 5 )  // condición de prueba    
     {
        contador ++;
        std::cout<< "contador: " << contador << "\n"; //actualuización(incrementa en un 1)
        
     } 

     std::cout<< "Terminado.Contador: " << contador << "\n";
     return 0;
}