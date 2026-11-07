#include <iostream>
using namespace std;

int main() {
    int numero;
    
    cout << "" << endl;
    cout << "Digite a nota: " << endl;
    cin >> numero;

    
    if (numero >= 9){
        cout << "Conceito: A" << endl;
    }
    else if (numero >= 7 and numero <= 9){
        cout << "Conceito: B" << endl;
    }
    else if(numero >=5 and numero <=7){
        cout << "Conceito: C" << endl;
    }
    else{
        cout << "Conceito: D" << endl;
    }

    return 0;
}