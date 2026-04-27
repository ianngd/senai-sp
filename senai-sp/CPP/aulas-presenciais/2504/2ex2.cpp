#include <iostream>
using namespace std;

int main() {
    double peso;
    double altura;
    double imc;
    
    cout << "" << endl;
    cout << "Informe o peso: ";
    cin >> peso;
    
    cout << "" << endl;
    cout << "Informe a altura: ";
    cin >> altura;

    imc = peso / (altura * altura);

    if(imc < 18.5){
        cout<< "Abaixo do peso." <<  endl;
        cout<< "" << endl;
    }
    else if (imc >= 18.5 && imc < 25){
        cout<< "Peso normal." <<  endl;
        cout<< "" << endl;
    }
    else{
        cout<< "Acima do peso." <<  endl;
        cout<< "" << endl;
    }

    return 0;
}