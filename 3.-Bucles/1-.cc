#include <iostream>
using namespace std;

int main() 
{
    int contador = 0; // inicializa la condición
    
    
    while(contador < 5 )  // condición de prueba    
     {
        contador ++;
        cout<< "contador: " << contador << "\n"; //actualuización(incrementa en un 1)
        
     } 

     cout<< "Terminado.Contador: " << contador << "\n";
     return 0;
}