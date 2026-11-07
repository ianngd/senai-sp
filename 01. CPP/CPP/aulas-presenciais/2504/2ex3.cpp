#include <iostream>
using namespace std;

int main() {
    double num1;
    char operacao;
    double num2;
    
    cout << "" << endl;
    cout << "Informe o primeiro numero: ";
    cin >> num1;
    
    cout << "" << endl;
    cout << "Simbolo da operacao (+, -, *, /): ";
    cin >> operacao;

    cout << "" << endl;
    cout << "Informe o segundo numero: ";
    cin >> num2;

    switch(operacao){
        case '+':
            cout<< "Resultado: " << num1 + num2 << endl;
            break;
        case '-':
            cout<< "Resultado: " << num1 - num2 << endl;
            break;
        case '*':
            cout<< "Resultado: " << num1 * num2 << endl;
            break;
        case '/':
            cout<< "Resultado: " << num1 / num2 << endl;
            break;
        default:
            cout<< "Operacao invalida." <<  endl;
            cout<< "" << endl;
            return main();
    }

    return 0;
}