#include <iostream>
using namespace std;

class Rectangulo {

private:
    float ancho;
    float alto;


public:

    Rectangulo(float w, float h) {
        ancho = w;
        alto = h;        
    }

    float calcularArea() {
        return ancho * alto;
    }

    float calcularPerimetro() {
        return 2 * (ancho + alto);
    }
};

int main() {
    Rectangulo miRectangulo(7.0, 3.0);

    float area = miRectangulo.calcularArea();
    float perimetro = miRectangulo.calcularPerimetro();


    cout << "el area del rectangulo es: " << area << endl;
    cout << "el area perimetro del retectangulo es: " << perimetro << endl;

    return 0;
}
