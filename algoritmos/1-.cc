#include <iostream> 

using namespace std;

void decimalBinary(int n) {
    int binaryNum[32];
    int i = 0;

    while (n > 0){
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }

    cout << "el numero en binario es: ";
    for(int j=i-1;j>=0;j--){
        cout <<binaryNum[j];
        
    }
    
    cout<<endl;

}

int main(){
    int decimalNumber;
    cout<< "Ingrese el numero decimal: ";
    cin >> decimalNumber;


    decimalBinary(decimalNumber);

    return 0;
}


// ESTE CODIGO ENCUENTRA EL NUMERO BINARIO DE UN DECIMAL
