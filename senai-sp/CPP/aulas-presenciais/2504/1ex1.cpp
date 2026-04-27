#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Digite um numero: " << endl;
    cin >> numero;

    if (numero % 2 == 0){
        cout << "O numero eh par!" << endl;
    }
    else if (numero < 0 ){
        cout << "O numero eh negativo!" << endl;
    }
    else{
        cout << "O numero eh impar!" << endl;
    }

    return 0;
}