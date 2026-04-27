#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Digite um numero: " << endl;
    cin >> numero;

    if (numero == 0){
        cout << "O numero eh zero!" << endl;
    }
    else if (numero < 0 ){
        cout << "O numero eh negativo!" << endl;
    }
    else{
        cout << "O numero eh positivo!" << endl;
    }

    return 0;
}